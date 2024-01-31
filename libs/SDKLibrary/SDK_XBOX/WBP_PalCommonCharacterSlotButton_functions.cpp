#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C
// (None)

class UClass* UWBP_PalCommonCharacterSlotButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonCharacterSlotButton_C");

	return Clss;
}


// WBP_PalCommonCharacterSlotButton_C WBP_PalCommonCharacterSlotButton.Default__WBP_PalCommonCharacterSlotButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonCharacterSlotButton_C* UWBP_PalCommonCharacterSlotButton_C::GetDefaultObj()
{
	static class UWBP_PalCommonCharacterSlotButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonCharacterSlotButton_C*>(UWBP_PalCommonCharacterSlotButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.SetOverrideSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewSize                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::SetOverrideSize(const struct FVector2D& NewSize, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "SetOverrideSize");

	Params::UWBP_PalCommonCharacterSlotButton_C_SetOverrideSize_Params Parms{};

	Parms.NewSize = NewSize;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.RegisterCharacterSlotWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotBase_C* CharacterSlotWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C** CharacterSlotWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "RegisterCharacterSlotWidget");

	Params::UWBP_PalCommonCharacterSlotButton_C_RegisterCharacterSlotWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSlotWidget != nullptr)
		*CharacterSlotWidget = Parms.CharacterSlotWidget;

}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.RegisterButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::RegisterButton(class UCommonButtonBase** Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "RegisterButton");

	Params::UWBP_PalCommonCharacterSlotButton_C_RegisterButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;

}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.PlayUnfocusAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::PlayUnfocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "PlayUnfocusAnim");

	Params::UWBP_PalCommonCharacterSlotButton_C_PlayUnfocusAnim_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlotButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.SetEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::SetEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "SetEnable");

	Params::UWBP_PalCommonCharacterSlotButton_C_SetEnable_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.AnmEvent_BasePal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::AnmEvent_BasePal(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "AnmEvent_BasePal");

	Params::UWBP_PalCommonCharacterSlotButton_C_AnmEvent_BasePal_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.AnmEvent_ConsumePal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::AnmEvent_ConsumePal(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "AnmEvent_ConsumePal");

	Params::UWBP_PalCommonCharacterSlotButton_C_AnmEvent_ConsumePal_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.PlayFocusAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterSlotButtonBase_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::PlayFocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "PlayFocusAnim");

	Params::UWBP_PalCommonCharacterSlotButton_C_PlayFocusAnim_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterSlotButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.ExecuteUbergraph_WBP_PalCommonCharacterSlotButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCharacterSlotButtonBase_C*K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsEnable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCharacterSlotButtonBase_C*K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterSlotButton_C::ExecuteUbergraph_WBP_PalCommonCharacterSlotButton(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_PalCharacterSlotButtonBase_C* K2Node_CustomEvent_Widget_1, bool K2Node_CustomEvent_IsEnable, double CallFunc_SelectFloat_ReturnValue, bool K2Node_CustomEvent_Enable_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool K2Node_CustomEvent_Enable, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, class UWBP_PalCharacterSlotButtonBase_C* K2Node_CustomEvent_Widget, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterSlotButton_C", "ExecuteUbergraph_WBP_PalCommonCharacterSlotButton");

	Params::UWBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.K2Node_CustomEvent_IsEnable = K2Node_CustomEvent_IsEnable;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Enable_1 = K2Node_CustomEvent_Enable_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


