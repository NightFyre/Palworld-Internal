#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C
// (None)

class UClass* UWBP_PlayerRadialMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerRadialMenu_C");

	return Clss;
}


// WBP_PlayerRadialMenu_C WBP_PlayerRadialMenu.Default__WBP_PlayerRadialMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerRadialMenu_C* UWBP_PlayerRadialMenu_C::GetDefaultObj()
{
	static class UWBP_PlayerRadialMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerRadialMenu_C*>(UWBP_PlayerRadialMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.IsAnyMenuOpened
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsOpened                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::IsAnyMenuOpened(bool* IsOpened)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "IsAnyMenuOpened");

	Params::UWBP_PlayerRadialMenu_C_IsAnyMenuOpened_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOpened != nullptr)
		*IsOpened = Parms.IsOpened;

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.SetInteractEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInteractEnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInteractComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::SetInteractEnable(bool IsInteractEnable, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "SetInteractEnable");

	Params::UWBP_PlayerRadialMenu_C_SetInteractEnable_Params Parms{};

	Parms.IsInteractEnable = IsInteractEnable;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.EmptyFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerRadialMenu_C::EmptyFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "EmptyFunction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.HasConstructionMenu
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               HasMenu                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::HasConstructionMenu(bool* HasMenu, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "HasConstructionMenu");

	Params::UWBP_PlayerRadialMenu_C_HasConstructionMenu_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasMenu != nullptr)
		*HasMenu = Parms.HasMenu;

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.IsPlayerRiding
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsRiding                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRiding_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::IsPlayerRiding(bool* IsRiding, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRiding_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "IsPlayerRiding");

	Params::UWBP_PlayerRadialMenu_C_IsPlayerRiding_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsRiding_ReturnValue = CallFunc_IsRiding_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRiding != nullptr)
		*IsRiding = Parms.IsRiding;

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CloseConstructionMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_IngameMenuConstruction_Radial_C*Menu                                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              FindIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::CloseConstructionMenu(class UWBP_IngameMenuConstruction_Radial_C* Menu, int32 FindIndex, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CloseConstructionMenu");

	Params::UWBP_PlayerRadialMenu_C_CloseConstructionMenu_Params Parms{};

	Parms.Menu = Menu;
	Parms.FindIndex = FindIndex;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreateConstructionMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_IngameMenuConstruction_Radial_C*CreatedWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UWBP_IngameMenuConstruction_Radial_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::CreateConstructionMenu(class UWBP_IngameMenuConstruction_Radial_C** CreatedWidget, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class UWBP_IngameMenuConstruction_Radial_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CreateConstructionMenu");

	Params::UWBP_PlayerRadialMenu_C_CreateConstructionMenu_Params Parms{};

	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenConstructionMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SelectMapObjectId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasConstructionMenu_HasMenu                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_IngameMenuConstruction_Radial_C*CallFunc_CreateConstructionMenu_createdWidget                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerRiding_IsRiding                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OpenConstructionMenu(class FName SelectMapObjectId, int32 SelectedIndex, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasConstructionMenu_HasMenu, class UWBP_IngameMenuConstruction_Radial_C* CallFunc_CreateConstructionMenu_createdWidget, bool CallFunc_IsPlayerRiding_IsRiding, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OpenConstructionMenu");

	Params::UWBP_PlayerRadialMenu_C_OpenConstructionMenu_Params Parms{};

	Parms.SelectMapObjectId = SelectMapObjectId;
	Parms.SelectedIndex = SelectedIndex;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasConstructionMenu_HasMenu = CallFunc_HasConstructionMenu_HasMenu;
	Parms.CallFunc_CreateConstructionMenu_createdWidget = CallFunc_CreateConstructionMenu_createdWidget;
	Parms.CallFunc_IsPlayerRiding_IsRiding = CallFunc_IsPlayerRiding_IsRiding;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnPressConstructionMenuButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerRadialMenu_C::OnPressConstructionMenuButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnPressConstructionMenuButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedEmoteMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      EmoteAction                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_GetCurrentAction_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OnDecidedEmoteMenu(int32 Index, class UClass* EmoteAction, bool K2Node_SwitchInteger_CmpSuccess, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnDecidedEmoteMenu");

	Params::UWBP_PlayerRadialMenu_C_OnDecidedEmoteMenu_Params Parms{};

	Parms.Index = Index;
	Parms.EmoteAction = EmoteAction;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;
	Parms.CallFunc_GetCurrentAction_ReturnValue = CallFunc_GetCurrentAction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreateEmoteMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_2                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_3                       (None)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_3                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_4                       (None)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_4                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_5                       (None)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_5                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_6                       (None)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_6                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::CreateEmoteMenu(class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_1, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_2, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_3, class FText CallFunc_GetLocalizedTextFromHandle_Text_4, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_4, class FText CallFunc_GetLocalizedTextFromHandle_Text_5, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_5, class FText CallFunc_GetLocalizedTextFromHandle_Text_6, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CreateEmoteMenu");

	Params::UWBP_PlayerRadialMenu_C_CreateEmoteMenu_Params Parms{};

	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget = CallFunc_CreateInstructionsAdditionalWidget_createdWidget;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_2 = CallFunc_GetLocalizedTextFromHandle_Text_2;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_3 = CallFunc_GetLocalizedTextFromHandle_Text_3;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3;
	Parms.CallFunc_Set_Additional_Widget_Canvas = CallFunc_Set_Additional_Widget_Canvas;
	Parms.CallFunc_Set_Additional_Widget_Canvas_1 = CallFunc_Set_Additional_Widget_Canvas_1;
	Parms.CallFunc_Set_Additional_Widget_Canvas_2 = CallFunc_Set_Additional_Widget_Canvas_2;
	Parms.CallFunc_Set_Additional_Widget_Canvas_3 = CallFunc_Set_Additional_Widget_Canvas_3;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_4 = CallFunc_GetLocalizedTextFromHandle_Text_4;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4;
	Parms.CallFunc_Set_Additional_Widget_Canvas_4 = CallFunc_Set_Additional_Widget_Canvas_4;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_5 = CallFunc_GetLocalizedTextFromHandle_Text_5;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5;
	Parms.CallFunc_Set_Additional_Widget_Canvas_5 = CallFunc_Set_Additional_Widget_Canvas_5;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_6 = CallFunc_GetLocalizedTextFromHandle_Text_6;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6;
	Parms.CallFunc_Set_Additional_Widget_Canvas_6 = CallFunc_Set_Additional_Widget_Canvas_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.Open Emote Menu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::Open_Emote_Menu(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "Open Emote Menu");

	Params::UWBP_PlayerRadialMenu_C_Open_Emote_Menu_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnPlayerRideOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RideActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OnPlayerRideOn(class AActor* RideActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnPlayerRideOn");

	Params::UWBP_PlayerRadialMenu_C_OnPlayerRideOn_Params Parms{};

	Parms.RideActor = RideActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedInstruction_Care
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalActionType          HumanAction                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_GetCurrentAction_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionPairStandby_Petting_C*K2Node_DynamicCast_AsBP_Action_Pair_Standby_Petting              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionCutPalMeat_Player_C*K2Node_DynamicCast_AsBP_Action_Cut_Pal_Meat_Player               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              CallFunc_GetHasWeapon_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_MeatCutterKnife_C*       K2Node_DynamicCast_AsBP_Meat_Cutter_Knife                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetSpawnedOtomo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionByTypeParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OnDecidedInstruction_Care(enum class EPalActionType HumanAction, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_ActionPairStandby_Petting_C* K2Node_DynamicCast_AsBP_Action_Pair_Standby_Petting, bool K2Node_DynamicCast_bSuccess, class UBP_ActionCutPalMeat_Player_C* K2Node_DynamicCast_AsBP_Action_Cut_Pal_Meat_Player, bool K2Node_DynamicCast_bSuccess_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_2, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class ABP_MeatCutterKnife_C* K2Node_DynamicCast_AsBP_Meat_Cutter_Knife, bool K2Node_DynamicCast_bSuccess_2, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, bool CallFunc_IsValid_ReturnValue_1, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnDecidedInstruction_Care");

	Params::UWBP_PlayerRadialMenu_C_OnDecidedInstruction_Care_Params Parms{};

	Parms.HumanAction = HumanAction;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetCurrentAction_ReturnValue = CallFunc_GetCurrentAction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Action_Pair_Standby_Petting = K2Node_DynamicCast_AsBP_Action_Pair_Standby_Petting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Action_Cut_Pal_Meat_Player = K2Node_DynamicCast_AsBP_Action_Cut_Pal_Meat_Player;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.CallFunc_GetPalmi_ReturnValue_2 = CallFunc_GetPalmi_ReturnValue_2;
	Parms.CallFunc_GetHasWeapon_ReturnValue = CallFunc_GetHasWeapon_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Meat_Cutter_Knife = K2Node_DynamicCast_AsBP_Meat_Cutter_Knife;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_TryGetSpawnedOtomo_ReturnValue = CallFunc_TryGetSpawnedOtomo_ReturnValue;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayActionByTypeParameter_ReturnValue = CallFunc_PlayActionByTypeParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedInstruction_Feed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetSpawnedOtomo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OnDecidedInstruction_Feed(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnDecidedInstruction_Feed");

	Params::UWBP_PlayerRadialMenu_C_OnDecidedInstruction_Feed_Params Parms{};

	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetSpawnedOtomo_ReturnValue = CallFunc_TryGetSpawnedOtomo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedPlayerActionMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue_1                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue_2                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OnDecidedPlayerActionMenu(int32 Index, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue_1, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnDecidedPlayerActionMenu");

	Params::UWBP_PlayerRadialMenu_C_OnDecidedPlayerActionMenu_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue_1 = CallFunc_GetOtomoHolderComponent_ReturnValue_1;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue_2 = CallFunc_GetOtomoHolderComponent_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnOtomoChanged_Inactivated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerRadialMenu_C::OnOtomoChanged_Inactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnOtomoChanged_Inactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnOtomoChanged_Activated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerRadialMenu_C::OnOtomoChanged_Activated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnOtomoChanged_Activated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.UnbindPlayerActionMenuEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::UnbindPlayerActionMenuEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "UnbindPlayerActionMenuEvent");

	Params::UWBP_PlayerRadialMenu_C_UnbindPlayerActionMenuEvent_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component = K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.BindPlayerActionMenuEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::BindPlayerActionMenuEvent(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "BindPlayerActionMenuEvent");

	Params::UWBP_PlayerRadialMenu_C_BindPlayerActionMenuEvent_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component = K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreateInstructionsAdditionalWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_PlayerRadialMenu_MenuContent_C*CreatedWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::CreateInstructionsAdditionalWidget(class FText InText, class UWBP_PlayerRadialMenu_MenuContent_C** CreatedWidget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CreateInstructionsAdditionalWidget");

	Params::UWBP_PlayerRadialMenu_C_CreateInstructionsAdditionalWidget_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDamagedPlayer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerRadialMenu_C::OnDamagedPlayer(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnDamagedPlayer");

	Params::UWBP_PlayerRadialMenu_C_OnDamagedPlayer_Params Parms{};

	Parms.DamageResult = DamageResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CloseSetup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::CloseSetup(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CloseSetup");

	Params::UWBP_PlayerRadialMenu_C_CloseSetup_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasConstructionMenu_HasMenu                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::CloseMenu(class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_HasConstructionMenu_HasMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CloseMenu");

	Params::UWBP_PlayerRadialMenu_C_CloseMenu_Params Parms{};

	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_HasConstructionMenu_HasMenu = CallFunc_HasConstructionMenu_HasMenu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreatePlayerActionMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         TmpMsgID                                                         (Edit, BlueprintVisible, NoDestructor)
// class FString                      OtomoNickName                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 TextColor_NothingOtomo                                           (Edit, BlueprintVisible)
// class APalCharacter*               SpawnedOtomo                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               IsOtomoActivated                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class APalWeaponBase*              CallFunc_GetHasWeapon_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_MeatCutterKnife_C*       K2Node_DynamicCast_AsBP_Meat_Cutter_Knife                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_2                       (None)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_3                       (None)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_4                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_5                       (None)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_3                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_4                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_6                       (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_5                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_6                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_7                       (None)
// class UWBP_PlayerRadialMenu_MenuContent_C*CallFunc_CreateInstructionsAdditionalWidget_createdWidget_7      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetSpawnedOtomo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_7                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::CreatePlayerActionMenu(const struct FDataTableRowHandle& TmpMsgID, const class FString& OtomoNickName, const struct FSlateColor& TextColor_NothingOtomo, class APalCharacter* SpawnedOtomo, bool IsOtomoActivated, class FText CallFunc_GetLocalizedTextFromHandle_Text, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget, class ABP_MeatCutterKnife_C* K2Node_DynamicCast_AsBP_Meat_Cutter_Knife, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_4, class FText CallFunc_GetLocalizedTextFromHandle_Text_5, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_3, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_4, class FText CallFunc_GetLocalizedTextFromHandle_Text_6, class FText CallFunc_Format_ReturnValue_1, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_5, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_6, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_7, class UWBP_PlayerRadialMenu_MenuContent_C* CallFunc_CreateInstructionsAdditionalWidget_createdWidget_7, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const class FString& CallFunc_GetNickName_outName, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CreatePlayerActionMenu");

	Params::UWBP_PlayerRadialMenu_C_CreatePlayerActionMenu_Params Parms{};

	Parms.TmpMsgID = TmpMsgID;
	Parms.OtomoNickName = OtomoNickName;
	Parms.TextColor_NothingOtomo = TextColor_NothingOtomo;
	Parms.SpawnedOtomo = SpawnedOtomo;
	Parms.IsOtomoActivated = IsOtomoActivated;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_GetHasWeapon_ReturnValue = CallFunc_GetHasWeapon_ReturnValue;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget = CallFunc_CreateInstructionsAdditionalWidget_createdWidget;
	Parms.K2Node_DynamicCast_AsBP_Meat_Cutter_Knife = K2Node_DynamicCast_AsBP_Meat_Cutter_Knife;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Set_Additional_Widget_Canvas = CallFunc_Set_Additional_Widget_Canvas;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_2 = CallFunc_GetLocalizedTextFromHandle_Text_2;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1;
	Parms.CallFunc_Set_Additional_Widget_Canvas_1 = CallFunc_Set_Additional_Widget_Canvas_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_3 = CallFunc_GetLocalizedTextFromHandle_Text_3;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2;
	Parms.CallFunc_Set_Additional_Widget_Canvas_2 = CallFunc_Set_Additional_Widget_Canvas_2;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_4 = CallFunc_GetLocalizedTextFromHandle_Text_4;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_5 = CallFunc_GetLocalizedTextFromHandle_Text_5;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4;
	Parms.CallFunc_Set_Additional_Widget_Canvas_3 = CallFunc_Set_Additional_Widget_Canvas_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Set_Additional_Widget_Canvas_4 = CallFunc_Set_Additional_Widget_Canvas_4;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_6 = CallFunc_GetLocalizedTextFromHandle_Text_6;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6;
	Parms.CallFunc_Set_Additional_Widget_Canvas_5 = CallFunc_Set_Additional_Widget_Canvas_5;
	Parms.CallFunc_Set_Additional_Widget_Canvas_6 = CallFunc_Set_Additional_Widget_Canvas_6;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_7 = CallFunc_GetLocalizedTextFromHandle_Text_7;
	Parms.CallFunc_CreateInstructionsAdditionalWidget_createdWidget_7 = CallFunc_CreateInstructionsAdditionalWidget_createdWidget_7;
	Parms.CallFunc_TryGetSpawnedOtomo_ReturnValue = CallFunc_TryGetSpawnedOtomo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_Set_Additional_Widget_Canvas_7 = CallFunc_Set_Additional_Widget_Canvas_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CanOpenPlayerActionMenu
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExecuting_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRiding_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::CanOpenPlayerActionMenu(bool* Result, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsExecuting_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRiding_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "CanOpenPlayerActionMenu");

	Params::UWBP_PlayerRadialMenu_C_CanOpenPlayerActionMenu_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsExecuting_ReturnValue = CallFunc_IsExecuting_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsRiding_ReturnValue = CallFunc_IsRiding_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenSetup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OpenSetup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OpenSetup");

	Params::UWBP_PlayerRadialMenu_C_OpenSetup_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OpenMenu(class UPalHUDService* CallFunc_GetHUDService_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OpenMenu");

	Params::UWBP_PlayerRadialMenu_C_OpenMenu_Params Parms{};

	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenPlayerActionMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanOpenPlayerActionMenu_Result                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSpawnedOtomoID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetSpawnedOtomo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OpenPlayerActionMenu(bool CallFunc_CanOpenPlayerActionMenu_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetSpawnedOtomoID_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OpenPlayerActionMenu");

	Params::UWBP_PlayerRadialMenu_C_OpenPlayerActionMenu_Params Parms{};

	Parms.CallFunc_CanOpenPlayerActionMenu_Result = CallFunc_CanOpenPlayerActionMenu_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSpawnedOtomoID_ReturnValue = CallFunc_GetSpawnedOtomoID_ReturnValue;
	Parms.CallFunc_TryGetSpawnedOtomo_ReturnValue = CallFunc_TryGetSpawnedOtomo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnPushedAnyWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       PushedWidgetID                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::OnPushedAnyWidget(struct FGuid& PushedWidgetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "OnPushedAnyWidget");

	Params::UWBP_PlayerRadialMenu_C_OnPushedAnyWidget_Params Parms{};

	Parms.PushedWidgetID = PushedWidgetID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.BindOpenPlayerActionMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerRadialMenu_C::BindOpenPlayerActionMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "BindOpenPlayerActionMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.UnbindOpenPlayerActionMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerRadialMenu_C::UnbindOpenPlayerActionMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "UnbindOpenPlayerActionMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.SetupEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerRadialMenu_C::SetupEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "SetupEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.ExecuteUbergraph_WBP_PlayerRadialMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalRiderComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerRadialMenu_C::ExecuteUbergraph_WBP_PlayerRadialMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_2, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerRadialMenu_C", "ExecuteUbergraph_WBP_PlayerRadialMenu");

	Params::UWBP_PlayerRadialMenu_C_ExecuteUbergraph_WBP_PlayerRadialMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller_1 = K2Node_DynamicCast_AsPal_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_2 = CallFunc_GetLocalPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller_2 = K2Node_DynamicCast_AsPal_Player_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


