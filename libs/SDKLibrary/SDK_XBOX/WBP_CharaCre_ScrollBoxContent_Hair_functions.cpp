#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C
// (None)

class UClass* UWBP_CharaCre_ScrollBoxContent_Hair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_ScrollBoxContent_Hair_C");

	return Clss;
}


// WBP_CharaCre_ScrollBoxContent_Hair_C WBP_CharaCre_ScrollBoxContent_Hair.Default__WBP_CharaCre_ScrollBoxContent_Hair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_ScrollBoxContent_Hair_C* UWBP_CharaCre_ScrollBoxContent_Hair_C::GetDefaultObj()
{
	static class UWBP_CharaCre_ScrollBoxContent_Hair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_ScrollBoxContent_Hair_C*>(UWBP_CharaCre_ScrollBoxContent_Hair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.OnChangedHairColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::OnChangedHairColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "OnChangedHairColor");

	Params::UWBP_CharaCre_ScrollBoxContent_Hair_C_OnChangedHairColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::GetRestoreFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "GetRestoreFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContent_Hair_C_GetRestoreFocusTarget_Params Parms{};

	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.OnClosedHairColorSelectWindow
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

void UWBP_CharaCre_ScrollBoxContent_Hair_C::OnClosedHairColorSelectWindow(class UPalHUDDispatchParameterBase* Param, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_HSVToRGBLinear_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "OnClosedHairColorSelectWindow");

	Params::UWBP_CharaCre_ScrollBoxContent_Hair_C_OnClosedHairColorSelectWindow_Params Parms{};

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


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.ApplyMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfoMakeInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "ApplyMakeInfo");

	Params::UWBP_CharaCre_ScrollBoxContent_Hair_C_ApplyMakeInfo_Params Parms{};

	Parms.MakeInfo = MakeInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::GetTopFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "GetTopFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContent_Hair_C_GetTopFocusTarget_Params Parms{};

	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContent_Hair_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_ColorSelect_sq_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Hair_C_BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationColorPresetDataRowCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationMeshPresetDataRowCallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ColorSelect_sq_C*K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBindedColor_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CharaCre_ColorSelectWindowDispatchParameter_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPalCharacterCreationColorPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_CharaCre_ColorSelect_sq_C* K2Node_ComponentBoundEvent_Widget, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FLinearColor& CallFunc_GetBindedColor_Color, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair");

	Params::UWBP_CharaCre_ScrollBoxContent_Hair_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetBindedColor_Color = CallFunc_GetBindedColor_Color;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.OnSelectedHairColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                HSV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContent_Hair_C::OnSelectedHairColor__DelegateSignature(const struct FLinearColor& HSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContent_Hair_C", "OnSelectedHairColor__DelegateSignature");

	Params::UWBP_CharaCre_ScrollBoxContent_Hair_C_OnSelectedHairColor__DelegateSignature_Params Parms{};

	Parms.HSV = HSV;

	UObject::ProcessEvent(Func, &Parms);

}

}


