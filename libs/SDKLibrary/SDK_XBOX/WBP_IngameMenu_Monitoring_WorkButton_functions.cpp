#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C
// (None)

class UClass* UWBP_IngameMenu_Monitoring_WorkButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_Monitoring_WorkButton_C");

	return Clss;
}


// WBP_IngameMenu_Monitoring_WorkButton_C WBP_IngameMenu_Monitoring_WorkButton.Default__WBP_IngameMenu_Monitoring_WorkButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_Monitoring_WorkButton_C* UWBP_IngameMenu_Monitoring_WorkButton_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_Monitoring_WorkButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_Monitoring_WorkButton_C*>(UWBP_IngameMenu_Monitoring_WorkButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Monitoring_WorkButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C.BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_WorkButton_C::BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkButton_C", "BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_Monitoring_WorkButton_C_BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C.BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_WorkButton_C::BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkButton_C", "BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_Monitoring_WorkButton_C_BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C.BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_WorkButton_C::BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkButton_C", "BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_IngameMenu_Monitoring_WorkButton_C_BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Monitoring_WorkButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkButton_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C.ActiveSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_WorkButton_C::ActiveSelect(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkButton_C", "ActiveSelect");

	Params::UWBP_IngameMenu_Monitoring_WorkButton_C_ActiveSelect_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C.ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_WorkButton_C::ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkButton(int32 EntryPoint, int32 Temp_int_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UTexture2D* K2Node_Select_Default, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool K2Node_CustomEvent_Active, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkButton_C", "ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkButton");

	Params::UWBP_IngameMenu_Monitoring_WorkButton_C_ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Monitoring_WorkButton_C::OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkButton_C", "OnUnhover__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WorkHardLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_WorkButton_C::OnHover__DelegateSignature(int32 WorkHardLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkButton_C", "OnHover__DelegateSignature");

	Params::UWBP_IngameMenu_Monitoring_WorkButton_C_OnHover__DelegateSignature_Params Parms{};

	Parms.WorkHardLevel = WorkHardLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring_WorkButton.WBP_IngameMenu_Monitoring_WorkButton_C.OnChangeHardWorkLevel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WorkLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_WorkButton_C::OnChangeHardWorkLevel__DelegateSignature(int32 WorkLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkButton_C", "OnChangeHardWorkLevel__DelegateSignature");

	Params::UWBP_IngameMenu_Monitoring_WorkButton_C_OnChangeHardWorkLevel__DelegateSignature_Params Parms{};

	Parms.WorkLevel = WorkLevel;

	UObject::ProcessEvent(Func, &Parms);

}

}


