#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C
// (None)

class UClass* UWBP_CharaCre_ColorSelect_WithPreset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_ColorSelect_WithPreset_C");

	return Clss;
}


// WBP_CharaCre_ColorSelect_WithPreset_C WBP_CharaCre_ColorSelect_WithPreset.Default__WBP_CharaCre_ColorSelect_WithPreset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_ColorSelect_WithPreset_C* UWBP_CharaCre_ColorSelect_WithPreset_C::GetDefaultObj()
{
	static class UWBP_CharaCre_ColorSelect_WithPreset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_ColorSelect_WithPreset_C*>(UWBP_CharaCre_ColorSelect_WithPreset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ColorSelect_sq_C*K2Node_DynamicCast_AsWBP_Chara_Cre_Color_Select_Sq               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::GetTopFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_CharaCre_ColorSelect_sq_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Color_Select_Sq, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "GetTopFocusTarget");

	Params::UWBP_CharaCre_ColorSelect_WithPreset_C_GetTopFocusTarget_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Chara_Cre_Color_Select_Sq = K2Node_DynamicCast_AsWBP_Chara_Cre_Color_Select_Sq;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::SetColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "SetColor");

	Params::UWBP_CharaCre_ColorSelect_WithPreset_C_SetColor_Params Parms{};

	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.CustomNavi_PresetToCustomColor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharaCre_ColorSelect_WithPreset_C::CustomNavi_PresetToCustomColor(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "CustomNavi_PresetToCustomColor");

	Params::UWBP_CharaCre_ColorSelect_WithPreset_C_CustomNavi_PresetToCustomColor_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.SetColorForce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::SetColorForce(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "SetColorForce");

	Params::UWBP_CharaCre_ColorSelect_WithPreset_C_SetColorForce_Params Parms{};

	Parms.NewColor = NewColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.OnClickedPreset
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_ColorSelect_sq_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBindedColor_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::OnClickedPreset(class UWBP_CharaCre_ColorSelect_sq_C* Widget, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetBindedColor_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "OnClickedPreset");

	Params::UWBP_CharaCre_ColorSelect_WithPreset_C_OnClickedPreset_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBindedColor_Color = CallFunc_GetBindedColor_Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FLinearColor>        PresetColors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ColorSelect_sq_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::Setup(TArray<struct FLinearColor>& PresetColors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& CallFunc_Array_Get_Item, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharaCre_ColorSelect_sq_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "Setup");

	Params::UWBP_CharaCre_ColorSelect_WithPreset_C_Setup_Params Parms{};

	Parms.PresetColors = PresetColors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                HSV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature(const struct FLinearColor& HSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature");

	Params::UWBP_CharaCre_ColorSelect_WithPreset_C_BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature_Params Parms{};

	Parms.HSV = HSV;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_0_OnNotifyCustomColorClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ColorSelect_WithPreset_C::BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_0_OnNotifyCustomColorClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_0_OnNotifyCustomColorClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_ComponentBoundEvent_HSV                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset(int32 EntryPoint, const struct FLinearColor& K2Node_ComponentBoundEvent_HSV, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset");

	Params::UWBP_CharaCre_ColorSelect_WithPreset_C_ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_HSV = K2Node_ComponentBoundEvent_HSV;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ColorSelect_WithPreset.WBP_CharaCre_ColorSelect_WithPreset_C.OnColorChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                HSV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSelect_WithPreset_C::OnColorChanged__DelegateSignature(const struct FLinearColor& HSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSelect_WithPreset_C", "OnColorChanged__DelegateSignature");

	Params::UWBP_CharaCre_ColorSelect_WithPreset_C_OnColorChanged__DelegateSignature_Params Parms{};

	Parms.HSV = HSV;

	UObject::ProcessEvent(Func, &Parms);

}

}


