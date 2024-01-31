#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C
// (None)

class UClass* UWBP_PalBuildObjectThumbnailButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalBuildObjectThumbnailButton_C");

	return Clss;
}


// WBP_PalBuildObjectThumbnailButton_C WBP_PalBuildObjectThumbnailButton.Default__WBP_PalBuildObjectThumbnailButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalBuildObjectThumbnailButton_C* UWBP_PalBuildObjectThumbnailButton_C::GetDefaultObj()
{
	static class UWBP_PalBuildObjectThumbnailButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalBuildObjectThumbnailButton_C*>(UWBP_PalBuildObjectThumbnailButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.GetScaledCanvasSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWBP_PalBuildObjectThumbnailButton_C::GetScaledCanvasSize(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "GetScaledCanvasSize");

	Params::UWBP_PalBuildObjectThumbnailButton_C_GetScaledCanvasSize_Params Parms{};

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.SetScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewScale                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetScaledCanvasSize_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UWBP_PalBuildObjectThumbnailButton_C::SetScale(double NewScale, const struct FVector2D& CallFunc_GetScaledCanvasSize_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "SetScale");

	Params::UWBP_PalBuildObjectThumbnailButton_C_SetScale_Params Parms{};

	Parms.NewScale = NewScale;
	Parms.CallFunc_GetScaledCanvasSize_ReturnValue = CallFunc_GetScaledCanvasSize_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.SetBaseImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuildObjectThumbnailButton_C::SetBaseImageVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "SetBaseImageVisibility");

	Params::UWBP_PalBuildObjectThumbnailButton_C_SetBaseImageVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.GetBuildObjectData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalBuildObjectData         BuildObjectData                                                  (Parm, OutParm)

void UWBP_PalBuildObjectThumbnailButton_C::GetBuildObjectData(struct FPalBuildObjectData* BuildObjectData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "GetBuildObjectData");

	Params::UWBP_PalBuildObjectThumbnailButton_C_GetBuildObjectData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BuildObjectData != nullptr)
		*BuildObjectData = std::move(Parms.BuildObjectData);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.OnUnhoveredButton_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuildObjectThumbnailButton_C::OnUnhoveredButton_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "OnUnhoveredButton_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.OnClickedButton_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuildObjectThumbnailButton_C::OnClickedButton_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "OnClickedButton_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.OnHoveredButton_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuildObjectThumbnailButton_C::OnHoveredButton_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "OnHoveredButton_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.SetButtonFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuildObjectThumbnailButton_C::SetButtonFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "SetButtonFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBuildObjectData         BuildObjectData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPalMasterDataTableAccess_BuildObjectIconData*CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_FindRow_bResult                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalBuildObjectIconData     CallFunc_BP_FindRow_ReturnValue                                  (None)
// class FText                        CallFunc_GetMapObjectName_outName                                (None)

void UWBP_PalBuildObjectThumbnailButton_C::Setup(const struct FPalBuildObjectData& BuildObjectData, class UPalMasterDataTableAccess_BuildObjectIconData* CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectIconData& CallFunc_BP_FindRow_ReturnValue, class FText CallFunc_GetMapObjectName_outName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "Setup");

	Params::UWBP_PalBuildObjectThumbnailButton_C_Setup_Params Parms{};

	Parms.BuildObjectData = BuildObjectData;
	Parms.CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue = CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue;
	Parms.CallFunc_BP_FindRow_bResult = CallFunc_BP_FindRow_bResult;
	Parms.CallFunc_BP_FindRow_ReturnValue = CallFunc_BP_FindRow_ReturnValue;
	Parms.CallFunc_GetMapObjectName_outName = CallFunc_GetMapObjectName_outName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuildObjectThumbnailButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "PreConstruct");

	Params::UWBP_PalBuildObjectThumbnailButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuildObjectThumbnailButton_C::BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_PalBuildObjectThumbnailButton_C_BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuildObjectThumbnailButton_C::BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_PalBuildObjectThumbnailButton_C_BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuildObjectThumbnailButton_C::BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_PalBuildObjectThumbnailButton_C_BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalBuildObjectThumbnailButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.ExecuteUbergraph_WBP_PalBuildObjectThumbnailButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuildObjectThumbnailButton_C::ExecuteUbergraph_WBP_PalBuildObjectThumbnailButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "ExecuteUbergraph_WBP_PalBuildObjectThumbnailButton");

	Params::UWBP_PalBuildObjectThumbnailButton_C_ExecuteUbergraph_WBP_PalBuildObjectThumbnailButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalBuildObjectThumbnailButton_C*SelftWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuildObjectThumbnailButton_C::OnUnhovered__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* SelftWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "OnUnhovered__DelegateSignature");

	Params::UWBP_PalBuildObjectThumbnailButton_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.SelftWidget = SelftWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalBuildObjectThumbnailButton_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuildObjectThumbnailButton_C::OnHovered__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "OnHovered__DelegateSignature");

	Params::UWBP_PalBuildObjectThumbnailButton_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalBuildObjectThumbnailButton_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuildObjectThumbnailButton_C::OnClicked__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuildObjectThumbnailButton_C", "OnClicked__DelegateSignature");

	Params::UWBP_PalBuildObjectThumbnailButton_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


