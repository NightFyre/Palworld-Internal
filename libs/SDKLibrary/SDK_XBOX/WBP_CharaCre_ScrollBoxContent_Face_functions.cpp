#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C
// (None)

class UClass* UWBP_CharaCre_ScrollBoxContent_Face_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_ScrollBoxContent_Face_C");

	return Clss;
}


// WBP_CharaCre_ScrollBoxContent_Face_C WBP_CharaCre_ScrollBoxContent_Face.Default__WBP_CharaCre_ScrollBoxContent_Face_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_ScrollBoxContent_Face_C* UWBP_CharaCre_ScrollBoxContent_Face_C::GetDefaultObj()
{
	static class UWBP_CharaCre_ScrollBoxContent_Face_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_ScrollBoxContent_Face_C*>(UWBP_CharaCre_ScrollBoxContent_Face_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.OnChangedBrowColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Face_C::OnChangedBrowColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "OnChangedBrowColor");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_OnChangedBrowColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.OnCloseBrowColorSelectWindow
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

void UWBP_CharaCre_ScrollBoxContent_Face_C::OnCloseBrowColorSelectWindow(class UPalHUDDispatchParameterBase* Param, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_HSVToRGBLinear_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "OnCloseBrowColorSelectWindow");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_OnCloseBrowColorSelectWindow_Params Parms{};

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


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.OnChangedEyeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Face_C::OnChangedEyeColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "OnChangedEyeColor");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_OnChangedEyeColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Face_C::GetRestoreFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "GetRestoreFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_GetRestoreFocusTarget_Params Parms{};

	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.OnClosedEyeColorSelectWindow
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

void UWBP_CharaCre_ScrollBoxContent_Face_C::OnClosedEyeColorSelectWindow(class UPalHUDDispatchParameterBase* Param, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_HSVToRGBLinear_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "OnClosedEyeColorSelectWindow");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_OnClosedEyeColorSelectWindow_Params Parms{};

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


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.ApplyMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfoMakeInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CharaCre_ScrollBoxContent_Face_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "ApplyMakeInfo");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_ApplyMakeInfo_Params Parms{};

	Parms.MakeInfo = MakeInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Face_C::GetTopFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "GetTopFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_GetTopFocusTarget_Params Parms{};

	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContent_Face_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Eye_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_ColorSelect_sq_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Face_C::BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Eye_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Eye_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Eye_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Brow_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_ColorSelect_sq_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Face_C::BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Brow_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Brow_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_BndEvt__WBP_CharaCre_ScrollBoxContent_Face_WBP_CharaCre_ColorSelect_sq_Brow_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Face
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationColorPresetDataRowCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ColorSelect_sq_C*K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBindedColor_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationColorPresetDataRowCallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharaCre_ColorSelectWindowDispatchParameter_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ColorSelect_sq_C*K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBindedColor_Color_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharaCre_ColorSelectWindowDispatchParameter_C*CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationMeshPresetDataRowCallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationEyeMaterialDataRowCallFunc_GetDataTableRowFromName_OutRow_3                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Face_C::ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Face(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPalCharacterCreationColorPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWBP_CharaCre_ColorSelect_sq_C* K2Node_ComponentBoundEvent_Widget_1, const struct FLinearColor& CallFunc_GetBindedColor_Color, const struct FPalCharacterCreationColorPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_CharaCre_ColorSelect_sq_C* K2Node_ComponentBoundEvent_Widget, const struct FLinearColor& CallFunc_GetBindedColor_Color_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable_1, class FName CallFunc_Array_Get_Item, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FPalCharacterCreationEyeMaterialDataRow& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Face");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Face_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.CallFunc_GetBindedColor_Color = CallFunc_GetBindedColor_Color;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_GetBindedColor_Color_1 = CallFunc_GetBindedColor_Color_1;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.OnSelectedBrowColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Face_C::OnSelectedBrowColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "OnSelectedBrowColor__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_OnSelectedBrowColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Face.WBP_CharaCre_ScrollBoxContent_Face_C.OnSelectedEyeColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Face_C::OnSelectedEyeColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Face_C", "OnSelectedEyeColor__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Face_C_OnSelectedEyeColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}

}


