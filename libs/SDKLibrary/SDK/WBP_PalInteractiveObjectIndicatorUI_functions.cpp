#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C
// (None)

class UClass* UWBP_PalInteractiveObjectIndicatorUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalInteractiveObjectIndicatorUI_C");

	return Clss;
}


// WBP_PalInteractiveObjectIndicatorUI_C WBP_PalInteractiveObjectIndicatorUI.Default__WBP_PalInteractiveObjectIndicatorUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalInteractiveObjectIndicatorUI_C* UWBP_PalInteractiveObjectIndicatorUI_C::GetDefaultObj()
{
	static class UWBP_PalInteractiveObjectIndicatorUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalInteractiveObjectIndicatorUI_C*>(UWBP_PalInteractiveObjectIndicatorUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInteractiveObjectIndicatorUI_C::SetEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "SetEnable");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_SetEnable_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.RegisterAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInputConsume                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUserWidget*              Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionName                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_UIInputActionCallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_NotConcume_ReturnValue            (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_NotConcume_ReturnValue_1          (NoDestructor)

void UWBP_PalInteractiveObjectIndicatorUI_C::RegisterAction(bool IsInputConsume, class UPalUserWidget* Parent, class FName ActionName, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalDataTableRowName_UIInputAction& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_NotConcume_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_NotConcume_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "RegisterAction");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_RegisterAction_Params Parms{};

	Parms.IsInputConsume = IsInputConsume;
	Parms.Parent = Parent;
	Parms.ActionName = ActionName;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.CallFunc_RegisterActionBinding_NotConcume_ReturnValue = CallFunc_RegisterActionBinding_NotConcume_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_NotConcume_ReturnValue_1 = CallFunc_RegisterActionBinding_NotConcume_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.UpdateButtonType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalInteractiveObjectButtonTypeNewButtonType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewLongPushTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValidInteract                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInteractiveObjectIndicatorUI_C::UpdateButtonType(enum class EPalInteractiveObjectButtonType NewButtonType, double NewLongPushTime, bool IsValidInteract, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "UpdateButtonType");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_UpdateButtonType_Params Parms{};

	Parms.NewButtonType = NewButtonType;
	Parms.NewLongPushTime = NewLongPushTime;
	Parms.IsValidInteract = IsValidInteract;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.Unregister Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUserWidget*              Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInteractiveObjectIndicatorUI_C::Unregister_Action(class UPalUserWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "Unregister Action");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_Unregister_Action_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.EndTriggerInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInteractComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteracting_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInteractiveObjectIndicatorUI_C::EndTriggerInteract(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsInteracting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "EndTriggerInteract");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_EndTriggerInteract_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsInteracting_ReturnValue = CallFunc_IsInteracting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.StartTriggerInteract
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInteractComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInteractiveObjectIndicatorUI_C::StartTriggerInteract(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "StartTriggerInteract");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_StartTriggerInteract_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUserWidget*              Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionName                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInteractiveObjectIndicatorUI_C::Deactivate(class UPalUserWidget* Parent, class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "Deactivate");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_Deactivate_Params Parms{};

	Parms.Parent = Parent;
	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInputConsume                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUserWidget*              Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInteractiveObjectIndicatorUI_C::Activate(bool IsInputConsume, class UPalUserWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "Activate");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_Activate_Params Parms{};

	Parms.IsInputConsume = IsInputConsume;
	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.Update Interactable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInteractable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUserWidget*              Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInteractiveObjectIndicatorUI_C::Update_Interactable(bool bInteractable, class UPalUserWidget* Parent, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "Update Interactable");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_Update_Interactable_Params Parms{};

	Parms.bInteractable = bInteractable;
	Parms.Parent = Parent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.UpdateVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInteractiveObjectIndicatorUI_C::UpdateVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "UpdateVisible");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_UpdateVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsLockedByRide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_PalInteractiveObjectIndicatorUI_C::UpdateText(class FText InText, bool IsLockedByRide, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "UpdateText");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_UpdateText_Params Parms{};

	Parms.InText = InText;
	Parms.IsLockedByRide = IsLockedByRide;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalInteractiveObjectActionTypeActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalInteractiveObjectComponentInterface>Interface                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInteractiveObjectIndicatorUI_C::Setup(enum class EPalInteractiveObjectActionType ActionType, TScriptInterface<class IPalInteractiveObjectComponentInterface> Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInteractiveObjectIndicatorUI_C", "Setup");

	Params::UWBP_PalInteractiveObjectIndicatorUI_C_Setup_Params Parms{};

	Parms.ActionType = ActionType;
	Parms.Interface = Interface;

	UObject::ProcessEvent(Func, &Parms);

}

}


