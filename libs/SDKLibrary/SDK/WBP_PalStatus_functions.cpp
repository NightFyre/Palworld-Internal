#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalStatus.WBP_PalStatus_C
// (None)

class UClass* UWBP_PalStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalStatus_C");

	return Clss;
}


// WBP_PalStatus_C WBP_PalStatus.Default__WBP_PalStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalStatus_C* UWBP_PalStatus_C::GetDefaultObj()
{
	static class UWBP_PalStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalStatus_C*>(UWBP_PalStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalStatus.WBP_PalStatus_C.OnClosedDropPalDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::OnClosedDropPalDialog(bool bResult, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "OnClosedDropPalDialog");

	Params::UWBP_PalStatus_C_OnClosedDropPalDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.OnTriggerDropPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_PalStatus_C::OnTriggerDropPal(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, const class FString& CallFunc_GetNickName_outName, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "OnTriggerDropPal");

	Params::UWBP_PalStatus_C_OnTriggerDropPal_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.UnhoveredAnyPalPanel_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalStatus_C::UnhoveredAnyPalPanel_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "UnhoveredAnyPalPanel_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatus.WBP_PalStatus_C.HoveredAnyPalPanel_Internal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Panel_Index_from_Handle_index                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Panel_Index_from_Handle_isValid                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// bool                               CallFunc_IsShowingStatusWithList_isShowing                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PalMonsterCaptureSet_C*  CallFunc_GetCaptureCameraActor_cameraActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::HoveredAnyPalPanel_Internal(class UPalIndividualCharacterHandle* Handle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Get_Panel_Index_from_Handle_index, bool CallFunc_Get_Panel_Index_from_Handle_isValid, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, bool CallFunc_IsShowingStatusWithList_isShowing, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "HoveredAnyPalPanel_Internal");

	Params::UWBP_PalStatus_C_HoveredAnyPalPanel_Internal_Params Parms{};

	Parms.Handle = Handle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Get_Panel_Index_from_Handle_index = CallFunc_Get_Panel_Index_from_Handle_index;
	Parms.CallFunc_Get_Panel_Index_from_Handle_isValid = CallFunc_Get_Panel_Index_from_Handle_isValid;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_IsShowingStatusWithList_isShowing = CallFunc_IsShowingStatusWithList_isShowing;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCaptureCameraActor_cameraActor = CallFunc_GetCaptureCameraActor_cameraActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.ToSkillDetail
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalStatus_C::ToSkillDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "ToSkillDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatus.WBP_PalStatus_C.ToParameterDetail
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalStatus_C::ToParameterDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "ToParameterDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatus.WBP_PalStatus_C.SetupInputAction
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)

void UWBP_PalStatus_C::SetupInputAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "SetupInputAction");

	Params::UWBP_PalStatus_C_SetupInputAction_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.UnbindInputAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalStatus_C::UnbindInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "UnbindInputAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatus.WBP_PalStatus_C.Is Editing Nick Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEditing                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::Is_Editing_Nick_Name(bool* IsEditing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "Is Editing Nick Name");

	Params::UWBP_PalStatus_C_Is_Editing_Nick_Name_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEditing != nullptr)
		*IsEditing = Parms.IsEditing;

}


// Function WBP_PalStatus.WBP_PalStatus_C.BackToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalStatus_C::BackToList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "BackToList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatus.WBP_PalStatus_C.ShouldBackList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldBack                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShowingStatusWithList_isShowing                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::ShouldBackList(bool* ShouldBack, bool CallFunc_IsShowingStatusWithList_isShowing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "ShouldBackList");

	Params::UWBP_PalStatus_C_ShouldBackList_Params Parms{};

	Parms.CallFunc_IsShowingStatusWithList_isShowing = CallFunc_IsShowingStatusWithList_isShowing;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldBack != nullptr)
		*ShouldBack = Parms.ShouldBack;

}


// Function WBP_PalStatus.WBP_PalStatus_C.Setup One Pal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*CharacterHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterHandle*>K2Node_MakeArray_Array                                           (ReferenceParm)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::Setup_One_Pal(class UPalIndividualCharacterHandle* CharacterHandle, TArray<class UPalIndividualCharacterHandle*>& K2Node_MakeArray_Array, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "Setup One Pal");

	Params::UWBP_PalStatus_C_Setup_One_Pal_Params Parms{};

	Parms.CharacterHandle = CharacterHandle;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetRestoreFocusSkillPanelTarget_TargetWidget            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShowingStatusWithList_isShowing                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalStatus_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetRestoreFocusSkillPanelTarget_TargetWidget, bool CallFunc_IsShowingStatusWithList_isShowing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_PalStatus_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetRestoreFocusSkillPanelTarget_TargetWidget = CallFunc_GetRestoreFocusSkillPanelTarget_TargetWidget;
	Parms.CallFunc_IsShowingStatusWithList_isShowing = CallFunc_IsShowingStatusWithList_isShowing;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalStatus.WBP_PalStatus_C.Get Panel Index from Handle
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::Get_Panel_Index_from_Handle(class UPalIndividualCharacterHandle* Handle, int32* Index, bool* IsValid, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "Get Panel Index from Handle");

	Params::UWBP_PalStatus_C_Get_Panel_Index_from_Handle_Params Parms{};

	Parms.Handle = Handle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function WBP_PalStatus.WBP_PalStatus_C.Setup_MultiPal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetOtomoIndividualHandle_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::Setup_MultiPal(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "Setup_MultiPal");

	Params::UWBP_PalStatus_C_Setup_MultiPal_Params Parms{};

	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetOtomoIndividualHandle_ReturnValue = CallFunc_GetOtomoIndividualHandle_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.Setup_NothingPal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalStatus_C::Setup_NothingPal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "Setup_NothingPal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatus.WBP_PalStatus_C.Setup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterHandle*>Handles                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::Setup(TArray<class UPalIndividualCharacterHandle*>& Handles, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "Setup");

	Params::UWBP_PalStatus_C_Setup_Params Parms{};

	Parms.Handles = Handles;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.ClampInputNickName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ClampedNickName                                                  (Parm, OutParm)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PalStatus_C::ClampInputNickName(class FText InText, class FText* ClampedNickName, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Left_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "ClampInputNickName");

	Params::UWBP_PalStatus_C_ClampInputNickName_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ClampedNickName != nullptr)
		*ClampedNickName = Parms.ClampedNickName;

}


// Function WBP_PalStatus.WBP_PalStatus_C.NickNameFinalCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ETextCommit             TextCommit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        FinalNickName                                                    (Parm, OutParm)
// class FText                        CallFunc_ClampInputNickName_clampedNickName                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PalStatus_C::NickNameFinalCheck(class FText InText, enum class ETextCommit TextCommit, class FText* FinalNickName, class FText CallFunc_ClampInputNickName_clampedNickName, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "NickNameFinalCheck");

	Params::UWBP_PalStatus_C_NickNameFinalCheck_Params Parms{};

	Parms.InText = InText;
	Parms.TextCommit = TextCommit;
	Parms.CallFunc_ClampInputNickName_clampedNickName = CallFunc_ClampInputNickName_clampedNickName;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FinalNickName != nullptr)
		*FinalNickName = Parms.FinalNickName;

}


// Function WBP_PalStatus.WBP_PalStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatus.WBP_PalStatus_C.BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_0_OnClickedAnyPalPanel__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_0_OnClickedAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_0_OnClickedAnyPalPanel__DelegateSignature");

	Params::UWBP_PalStatus_C_BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_0_OnClickedAnyPalPanel__DelegateSignature_Params Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_1_OnHoveredAnyPalPanel__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_1_OnHoveredAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_1_OnHoveredAnyPalPanel__DelegateSignature");

	Params::UWBP_PalStatus_C_BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_1_OnHoveredAnyPalPanel__DelegateSignature_Params Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalStatus_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatus.WBP_PalStatus_C.OnCompletedCaptureActorSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalStatus_C::OnCompletedCaptureActorSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "OnCompletedCaptureActorSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatus.WBP_PalStatus_C.BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_3_OnCommitedNickName__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        NewNickName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalStatus_C::BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_3_OnCommitedNickName__DelegateSignature(class FText NewNickName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_3_OnCommitedNickName__DelegateSignature");

	Params::UWBP_PalStatus_C_BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_3_OnCommitedNickName__DelegateSignature_Params Parms{};

	Parms.NewNickName = NewNickName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_5_OnSelectedChangeActiveSkill__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              ChangeWazaID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              NewWazaID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_5_OnSelectedChangeActiveSkill__DelegateSignature(class UPalIndividualCharacterHandle* TargetHandle, enum class EPalWazaID ChangeWazaID, enum class EPalWazaID NewWazaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_5_OnSelectedChangeActiveSkill__DelegateSignature");

	Params::UWBP_PalStatus_C_BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_5_OnSelectedChangeActiveSkill__DelegateSignature_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.ChangeWazaID = ChangeWazaID;
	Parms.NewWazaID = NewWazaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_4_OnRequestedRemoveWaza__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EPalWazaID              WazaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_4_OnRequestedRemoveWaza__DelegateSignature(enum class EPalWazaID WazaID, class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_4_OnRequestedRemoveWaza__DelegateSignature");

	Params::UWBP_PalStatus_C_BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_4_OnRequestedRemoveWaza__DelegateSignature_Params Parms{};

	Parms.WazaID = WazaID;
	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatus.WBP_PalStatus_C.BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_2_OnUnhoveredAnyPalPanel__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PalStatus_C::BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_2_OnUnhoveredAnyPalPanel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_2_OnUnhoveredAnyPalPanel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatus.WBP_PalStatus_C.ExecuteUbergraph_WBP_PalStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_ComponentBoundEvent_handle                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PalMonsterCaptureSet_C*  CallFunc_GetCaptureCameraActor_cameraActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_ComponentBoundEvent_handle_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Panel_Index_from_Handle_index                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Panel_Index_from_Handle_isValid                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_newNickName                           (None)
// class FText                        CallFunc_NickNameFinalCheck_finalNickName                        (None)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_ComponentBoundEvent_TargetHandle_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              K2Node_ComponentBoundEvent_ChangeWazaID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              K2Node_ComponentBoundEvent_NewWazaID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              K2Node_ComponentBoundEvent_WazaID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_ComponentBoundEvent_TargetHandle                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatus_C::ExecuteUbergraph_WBP_PalStatus(int32 EntryPoint, class UPalIndividualCharacterHandle* K2Node_ComponentBoundEvent_handle, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterHandle* K2Node_ComponentBoundEvent_handle_1, int32 CallFunc_Get_Panel_Index_from_Handle_index, bool CallFunc_Get_Panel_Index_from_Handle_isValid, class FText K2Node_ComponentBoundEvent_newNickName, class FText CallFunc_NickNameFinalCheck_finalNickName, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, class UPalIndividualCharacterHandle* K2Node_ComponentBoundEvent_TargetHandle_1, enum class EPalWazaID K2Node_ComponentBoundEvent_ChangeWazaID, enum class EPalWazaID K2Node_ComponentBoundEvent_NewWazaID, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPalWazaID K2Node_ComponentBoundEvent_WazaID, class UPalIndividualCharacterHandle* K2Node_ComponentBoundEvent_TargetHandle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatus_C", "ExecuteUbergraph_WBP_PalStatus");

	Params::UWBP_PalStatus_C_ExecuteUbergraph_WBP_PalStatus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_handle = K2Node_ComponentBoundEvent_handle;
	Parms.CallFunc_GetCaptureCameraActor_cameraActor = CallFunc_GetCaptureCameraActor_cameraActor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_handle_1 = K2Node_ComponentBoundEvent_handle_1;
	Parms.CallFunc_Get_Panel_Index_from_Handle_index = CallFunc_Get_Panel_Index_from_Handle_index;
	Parms.CallFunc_Get_Panel_Index_from_Handle_isValid = CallFunc_Get_Panel_Index_from_Handle_isValid;
	Parms.K2Node_ComponentBoundEvent_newNickName = K2Node_ComponentBoundEvent_newNickName;
	Parms.CallFunc_NickNameFinalCheck_finalNickName = CallFunc_NickNameFinalCheck_finalNickName;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_ComponentBoundEvent_TargetHandle_1 = K2Node_ComponentBoundEvent_TargetHandle_1;
	Parms.K2Node_ComponentBoundEvent_ChangeWazaID = K2Node_ComponentBoundEvent_ChangeWazaID;
	Parms.K2Node_ComponentBoundEvent_NewWazaID = K2Node_ComponentBoundEvent_NewWazaID;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_WazaID = K2Node_ComponentBoundEvent_WazaID;
	Parms.K2Node_ComponentBoundEvent_TargetHandle = K2Node_ComponentBoundEvent_TargetHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


