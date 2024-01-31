#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameOver_Down.WBP_GameOver_Down_C
// (None)

class UClass* UWBP_GameOver_Down_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameOver_Down_C");

	return Clss;
}


// WBP_GameOver_Down_C WBP_GameOver_Down.Default__WBP_GameOver_Down_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameOver_Down_C* UWBP_GameOver_Down_C::GetDefaultObj()
{
	static class UWBP_GameOver_Down_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameOver_Down_C*>(UWBP_GameOver_Down_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GameOver_Down_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_GameOver_Down_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_GameOver_Down_C::Setup(class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "Setup");

	Params::UWBP_GameOver_Down_C_Setup_Params Parms{};

	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.EndTriggerInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameOver_Down_C::EndTriggerInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "EndTriggerInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.StartTriggerInteract
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameOver_Down_C::StartTriggerInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "StartTriggerInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.Unregister Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameOver_Down_C::Unregister_Action()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "Unregister Action");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.RegisterAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInputConsume                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionName                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_NotConcume_ReturnValue            (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_NotConcume_ReturnValue_1          (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)

void UWBP_GameOver_Down_C::RegisterAction(bool IsInputConsume, class FName ActionName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_NotConcume_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_NotConcume_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "RegisterAction");

	Params::UWBP_GameOver_Down_C_RegisterAction_Params Parms{};

	Parms.IsInputConsume = IsInputConsume;
	Parms.ActionName = ActionName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_NotConcume_ReturnValue = CallFunc_RegisterActionBinding_NotConcume_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_NotConcume_ReturnValue_1 = CallFunc_RegisterActionBinding_NotConcume_ReturnValue_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.UpdateDying
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Remain                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_Down_C::UpdateDying(double Remain, double Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "UpdateDying");

	Params::UWBP_GameOver_Down_C_UpdateDying_Params Parms{};

	Parms.Remain = Remain;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameOver_Down_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.CloseWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameOver_Down_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.SetInRescue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InRescue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_Down_C::SetInRescue(bool InRescue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "SetInRescue");

	Params::UWBP_GameOver_Down_C_SetInRescue_Params Parms{};

	Parms.InRescue = InRescue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_Down_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "Tick");

	Params::UWBP_GameOver_Down_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameOver_Down_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameOver_Down_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameOver_Down_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.ExecuteUbergraph_WBP_GameOver_Down
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Remain                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Max                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_DownWidgetParameter_C*   K2Node_DynamicCast_AsBP_Down_Widget_Parameter                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_InRescue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_Down_C::ExecuteUbergraph_WBP_GameOver_Down(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_CustomEvent_Remain, double K2Node_CustomEvent_Max, double CallFunc_Divide_DoubleDouble_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_DownWidgetParameter_C* K2Node_DynamicCast_AsBP_Down_Widget_Parameter, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class UMaterialInterface* Temp_object_Variable, int32 CallFunc_Round_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UMaterialInterface* Temp_object_Variable_1, bool K2Node_CustomEvent_InRescue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_SelectFloat_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "ExecuteUbergraph_WBP_GameOver_Down");

	Params::UWBP_GameOver_Down_C_ExecuteUbergraph_WBP_GameOver_Down_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Remain = K2Node_CustomEvent_Remain;
	Parms.K2Node_CustomEvent_Max = K2Node_CustomEvent_Max;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsBP_Down_Widget_Parameter = K2Node_DynamicCast_AsBP_Down_Widget_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_CustomEvent_InRescue = K2Node_CustomEvent_InRescue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.CallFunc_MakeVector4_ReturnValue_1 = CallFunc_MakeVector4_ReturnValue_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.OnCreateRescueWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_GameOver_Rescue_C*      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_Down_C::OnCreateRescueWidget__DelegateSignature(class UWBP_GameOver_Rescue_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "OnCreateRescueWidget__DelegateSignature");

	Params::UWBP_GameOver_Down_C_OnCreateRescueWidget__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameOver_Down.WBP_GameOver_Down_C.OnGiveup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameOver_Down_C::OnGiveup__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameOver_Down_C", "OnGiveup__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


