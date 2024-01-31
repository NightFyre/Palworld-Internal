#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C
// (None)

class UClass* UWBP_CharaCre_ScrollBoxContent_Body_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_ScrollBoxContent_Body_C");

	return Clss;
}


// WBP_CharaCre_ScrollBoxContent_Body_C WBP_CharaCre_ScrollBoxContent_Body.Default__WBP_CharaCre_ScrollBoxContent_Body_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_ScrollBoxContent_Body_C* UWBP_CharaCre_ScrollBoxContent_Body_C::GetDefaultObj()
{
	static class UWBP_CharaCre_ScrollBoxContent_Body_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_ScrollBoxContent_Body_C*>(UWBP_CharaCre_ScrollBoxContent_Body_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.SetDefaultBodyTypePresetName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_BodyTypeButton_C*K2Node_DynamicCast_AsWBP_Chara_Cre_Body_Type_Button              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedPresetName_PresetName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::SetDefaultBodyTypePresetName(class FName PresetName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_CharaCre_BodyTypeButton_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Body_Type_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class FName CallFunc_GetBindedPresetName_PresetName, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "SetDefaultBodyTypePresetName");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_SetDefaultBodyTypePresetName_Params Parms{};

	Parms.PresetName = PresetName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Chara_Cre_Body_Type_Button = K2Node_DynamicCast_AsWBP_Chara_Cre_Body_Type_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetBindedPresetName_PresetName = CallFunc_GetBindedPresetName_PresetName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.OnClickedBodyTypeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_BodyTypeButton_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedPresetName_PresetName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::OnClickedBodyTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetBindedPresetName_PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "OnClickedBodyTypeButton");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_OnClickedBodyTypeButton_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBindedPresetName_PresetName = CallFunc_GetBindedPresetName_PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.CustomNavi_ToSkinColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharaCre_ScrollBoxContent_Body_C::CustomNavi_ToSkinColor(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "CustomNavi_ToSkinColor");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_CustomNavi_ToSkinColor_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.CustomNavi_ToTorsoSlider
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharaCre_ScrollBoxContent_Body_C::CustomNavi_ToTorsoSlider(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "CustomNavi_ToTorsoSlider");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_CustomNavi_ToTorsoSlider_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::GetRestoreFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "GetRestoreFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_GetRestoreFocusTarget_Params Parms{};

	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.OnChangedSelectColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::OnChangedSelectColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "OnChangedSelectColor");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_OnChangedSelectColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.OnClosedCOlorSelectWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharaCre_ColorSelectWindowDispatchParameter_C*K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGBLinear_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::OnClosedCOlorSelectWindow(class UPalHUDDispatchParameterBase* Param, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_HSVToRGBLinear_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "OnClosedCOlorSelectWindow");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_OnClosedCOlorSelectWindow_Params Parms{};

	Parms.Param = Param;
	Parms.K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter = K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_HSVToRGBLinear_ReturnValue = CallFunc_HSVToRGBLinear_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.ApplyMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfoMakeInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             CallFunc_SetValueForce_Size_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetValueForce_Size_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetValueForce_Size_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, double CallFunc_SetValueForce_Size_ImplicitCast, double CallFunc_SetValueForce_Size_ImplicitCast_1, double CallFunc_SetValueForce_Size_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "ApplyMakeInfo");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_ApplyMakeInfo_Params Parms{};

	Parms.MakeInfo = MakeInfo;
	Parms.CallFunc_SetValueForce_Size_ImplicitCast = CallFunc_SetValueForce_Size_ImplicitCast;
	Parms.CallFunc_SetValueForce_Size_ImplicitCast_1 = CallFunc_SetValueForce_Size_ImplicitCast_1;
	Parms.CallFunc_SetValueForce_Size_ImplicitCast_2 = CallFunc_SetValueForce_Size_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_BodyTypeButton_C*K2Node_DynamicCast_AsWBP_Chara_Cre_Body_Type_Button              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::GetTopFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_CharaCre_BodyTypeButton_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Body_Type_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "GetTopFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_GetTopFocusTarget_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Chara_Cre_Body_Type_Button = K2Node_DynamicCast_AsWBP_Chara_Cre_Body_Type_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContent_Body_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_ColorSelect_sq_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_BndEvt__WBP_CharaCre_ScrollBoxContent_Body_WBP_CharaCre_ColorSelect_sq_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationColorPresetDataRowCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ColorSelect_sq_C*K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBindedColor_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharaCre_ColorSelectWindowDispatchParameter_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationMeshPresetDataRowCallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_BodyTypeButton_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, const struct FPalCharacterCreationColorPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UWBP_CharaCre_ColorSelect_sq_C* K2Node_ComponentBoundEvent_Widget, const struct FLinearColor& CallFunc_GetBindedColor_Color, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharaCre_BodyTypeButton_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Body_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_GetBindedColor_Color = CallFunc_GetBindedColor_Color;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.OnClickedBodyType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::OnClickedBodyType__DelegateSignature(class FName PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "OnClickedBodyType__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_OnClickedBodyType__DelegateSignature_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Body.WBP_CharaCre_ScrollBoxContent_Body_C.OnSelectedSkinColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Body_C::OnSelectedSkinColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Body_C", "OnSelectedSkinColor__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Body_C_OnSelectedSkinColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}

}


