#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C
// (None)

class UClass* UWBP_PalKeyGuideIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalKeyGuideIcon_C");

	return Clss;
}


// WBP_PalKeyGuideIcon_C WBP_PalKeyGuideIcon.Default__WBP_PalKeyGuideIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalKeyGuideIcon_C* UWBP_PalKeyGuideIcon_C::GetDefaultObj()
{
	static class UWBP_PalKeyGuideIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalKeyGuideIcon_C*>(UWBP_PalKeyGuideIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.SetOverrideSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::SetOverrideSize(const struct FVector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "SetOverrideSize");

	Params::UWBP_PalKeyGuideIcon_C_SetOverrideSize_Params Parms{};

	Parms.Size = Size;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.OverrideImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::OverrideImage(class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FSlateBrush& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "OverrideImage");

	Params::UWBP_PalKeyGuideIcon_C_OverrideImage_Params Parms{};

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.SetInputAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetUIInputActionRowHandle_outHandle                     (NoDestructor)
// bool                               CallFunc_GetUIInputActionRowHandle_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::SetInputAction(class FName ActionName, const struct FDataTableRowHandle& CallFunc_GetUIInputActionRowHandle_outHandle, bool CallFunc_GetUIInputActionRowHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "SetInputAction");

	Params::UWBP_PalKeyGuideIcon_C_SetInputAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.CallFunc_GetUIInputActionRowHandle_outHandle = CallFunc_GetUIInputActionRowHandle_outHandle;
	Parms.CallFunc_GetUIInputActionRowHandle_ReturnValue = CallFunc_GetUIInputActionRowHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalKeyGuideIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalKeyGuideIcon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UWBP_PalKeyGuideIcon_C_BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.ExecuteUbergraph_WBP_PalKeyGuideIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalKeyGuideIcon_C::ExecuteUbergraph_WBP_PalKeyGuideIcon(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalKeyGuideIcon_C", "ExecuteUbergraph_WBP_PalKeyGuideIcon");

	Params::UWBP_PalKeyGuideIcon_C_ExecuteUbergraph_WBP_PalKeyGuideIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


