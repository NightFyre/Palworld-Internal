#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C
// (None)

class UClass* UWBP_CharaCre_ScrollBoxContentSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_ScrollBoxContentSet_C");

	return Clss;
}


// WBP_CharaCre_ScrollBoxContentSet_C WBP_CharaCre_ScrollBoxContentSet.Default__WBP_CharaCre_ScrollBoxContentSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_ScrollBoxContentSet_C* UWBP_CharaCre_ScrollBoxContentSet_C::GetDefaultObj()
{
	static class UWBP_CharaCre_ScrollBoxContentSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_ScrollBoxContentSet_C*>(UWBP_CharaCre_ScrollBoxContentSet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.GetSelectedEyeHSV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                HSV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBindedColor_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RGBLinearToHSV_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentSet_C::GetSelectedEyeHSV(struct FLinearColor* HSV, const struct FLinearColor& CallFunc_GetBindedColor_Color, const struct FLinearColor& CallFunc_RGBLinearToHSV_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "GetSelectedEyeHSV");

	Params::UWBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV_Params Parms{};

	Parms.CallFunc_GetBindedColor_Color = CallFunc_GetBindedColor_Color;
	Parms.CallFunc_RGBLinearToHSV_ReturnValue = CallFunc_RGBLinearToHSV_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (HSV != nullptr)
		*HSV = std::move(Parms.HSV);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_UICharacterMakeCategoryCategoryType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ScrollBoxContentBase_C*CallFunc_GetWidgetByCategory_Widget                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentSet_C::GetRestoreFocusTarget(enum class E_UICharacterMakeCategory CategoryType, class UWidget** Widget, class UWBP_CharaCre_ScrollBoxContentBase_C* CallFunc_GetWidgetByCategory_Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "GetRestoreFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget_Params Parms{};

	Parms.CategoryType = CategoryType;
	Parms.CallFunc_GetWidgetByCategory_Widget = CallFunc_GetWidgetByCategory_Widget;
	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.ApplyMakeInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfoMakeInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ScrollBoxContentBase_C*K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentSet_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_CharaCre_ScrollBoxContentBase_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "ApplyMakeInfo");

	Params::UWBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo_Params Parms{};

	Parms.MakeInfo = MakeInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base = K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.GetWidgetByCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_UICharacterMakeCategoryTargetCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ScrollBoxContentBase_C*Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     TmpWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ScrollBoxContentBase_C*K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue_3                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue_4                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentSet_C::GetWidgetByCategory(enum class E_UICharacterMakeCategory TargetCategory, class UWBP_CharaCre_ScrollBoxContentBase_C** Widget, class UWidget* TmpWidget, bool K2Node_SwitchEnum_CmpSuccess, class UWBP_CharaCre_ScrollBoxContentBase_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_1, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_2, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_3, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "GetWidgetByCategory");

	Params::UWBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory_Params Parms{};

	Parms.TargetCategory = TargetCategory;
	Parms.TmpWidget = TmpWidget;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base = K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue_1 = CallFunc_GetWidgetAtIndex_ReturnValue_1;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue_2 = CallFunc_GetWidgetAtIndex_ReturnValue_2;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue_3 = CallFunc_GetWidgetAtIndex_ReturnValue_3;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue_4 = CallFunc_GetWidgetAtIndex_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_UICharacterMakeCategoryNewCategory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ScrollBoxContentBase_C*CallFunc_GetWidgetByCategory_Widget                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentSet_C::GetTopFocusTarget(enum class E_UICharacterMakeCategory NewCategory, class UWidget** Widget, class UWBP_CharaCre_ScrollBoxContentBase_C* CallFunc_GetWidgetByCategory_Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "GetTopFocusTarget");

	Params::UWBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget_Params Parms{};

	Parms.NewCategory = NewCategory;
	Parms.CallFunc_GetWidgetByCategory_Widget = CallFunc_GetWidgetByCategory_Widget;
	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.ChangeMakeCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UICharacterMakeCategoryNewCategory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ScrollBoxContentBase_C*CallFunc_GetWidgetByCategory_Widget                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentSet_C::ChangeMakeCategory(enum class E_UICharacterMakeCategory NewCategory, class UWBP_CharaCre_ScrollBoxContentBase_C* CallFunc_GetWidgetByCategory_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "ChangeMakeCategory");

	Params::UWBP_CharaCre_ScrollBoxContentSet_C_ChangeMakeCategory_Params Parms{};

	Parms.NewCategory = NewCategory;
	Parms.CallFunc_GetWidgetByCategory_Widget = CallFunc_GetWidgetByCategory_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContentSet_C::BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_1_OnNotifyCloseSelectColorWindow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContentSet_C::BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_1_OnNotifyCloseSelectColorWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_1_OnNotifyCloseSelectColorWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_2_OnNotifyOpenSelectColorWindow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContentSet_C::BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_2_OnNotifyOpenSelectColorWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_2_OnNotifyOpenSelectColorWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_3_OnNotifyCloseSelectColorWindow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContentSet_C::BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_3_OnNotifyCloseSelectColorWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_3_OnNotifyCloseSelectColorWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_4_OnNotifyOpenSelectColorWindow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContentSet_C::BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_4_OnNotifyOpenSelectColorWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_4_OnNotifyOpenSelectColorWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_5_OnNotifyCloseSelectColorWindow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContentSet_C::BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_5_OnNotifyCloseSelectColorWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_5_OnNotifyCloseSelectColorWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ScrollBoxContentSet_C::ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet");

	Params::UWBP_CharaCre_ScrollBoxContentSet_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.OnNotifyCloseColorSelectWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContentSet_C::OnNotifyCloseColorSelectWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "OnNotifyCloseColorSelectWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.OnNotifyOpenSelectColorWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ScrollBoxContentSet_C::OnNotifyOpenSelectColorWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ScrollBoxContentSet_C", "OnNotifyOpenSelectColorWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


