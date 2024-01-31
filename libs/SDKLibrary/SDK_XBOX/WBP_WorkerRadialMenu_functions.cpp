#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C
// (None)

class UClass* UWBP_WorkerRadialMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WorkerRadialMenu_C");

	return Clss;
}


// WBP_WorkerRadialMenu_C WBP_WorkerRadialMenu.Default__WBP_WorkerRadialMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WorkerRadialMenu_C* UWBP_WorkerRadialMenu_C::GetDefaultObj()
{
	static class UWBP_WorkerRadialMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WorkerRadialMenu_C*>(UWBP_WorkerRadialMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.OnSelectedMenu_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::OnSelectedMenu_Internal(int32 Index, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "OnSelectedMenu_Internal");

	Params::UWBP_WorkerRadialMenu_C_OnSelectedMenu_Internal_Params Parms{};

	Parms.Index = Index;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.CreateContent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_WorkerRadialMenuContent_C*CreatedWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_WorkerRadialMenuContent_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::CreateContent(class FText Text, class UWBP_WorkerRadialMenuContent_C** CreatedWidget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_WorkerRadialMenuContent_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "CreateContent");

	Params::UWBP_WorkerRadialMenu_C_CreateContent_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.SetupContents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class UWBP_WorkerRadialMenuContent_C*CallFunc_CreateContent_createdWidget                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_WorkerRadialMenuContent_C*CallFunc_CreateContent_createdWidget_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_2                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_3                       (None)
// class UWBP_WorkerRadialMenuContent_C*CallFunc_CreateContent_createdWidget_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_WorkerRadialMenuContent_C*CallFunc_CreateContent_createdWidget_3                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_3                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_4                       (None)
// class UWBP_WorkerRadialMenuContent_C*CallFunc_CreateContent_createdWidget_4                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderTransformAngle_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_Set_Additional_Widget_Canvas_4                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::SetupContents(class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class UWBP_WorkerRadialMenuContent_C* CallFunc_CreateContent_createdWidget, class UWBP_WorkerRadialMenuContent_C* CallFunc_CreateContent_createdWidget_1, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class UWBP_WorkerRadialMenuContent_C* CallFunc_CreateContent_createdWidget_2, class UWBP_WorkerRadialMenuContent_C* CallFunc_CreateContent_createdWidget_3, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_2, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_3, class FText CallFunc_GetLocalizedTextFromHandle_Text_4, class UWBP_WorkerRadialMenuContent_C* CallFunc_CreateContent_createdWidget_4, float CallFunc_GetRenderTransformAngle_ReturnValue, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "SetupContents");

	Params::UWBP_WorkerRadialMenu_C_SetupContents_Params Parms{};

	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_CreateContent_createdWidget = CallFunc_CreateContent_createdWidget;
	Parms.CallFunc_CreateContent_createdWidget_1 = CallFunc_CreateContent_createdWidget_1;
	Parms.CallFunc_Set_Additional_Widget_Canvas = CallFunc_Set_Additional_Widget_Canvas;
	Parms.CallFunc_Set_Additional_Widget_Canvas_1 = CallFunc_Set_Additional_Widget_Canvas_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_2 = CallFunc_GetLocalizedTextFromHandle_Text_2;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_3 = CallFunc_GetLocalizedTextFromHandle_Text_3;
	Parms.CallFunc_CreateContent_createdWidget_2 = CallFunc_CreateContent_createdWidget_2;
	Parms.CallFunc_CreateContent_createdWidget_3 = CallFunc_CreateContent_createdWidget_3;
	Parms.CallFunc_Set_Additional_Widget_Canvas_2 = CallFunc_Set_Additional_Widget_Canvas_2;
	Parms.CallFunc_Set_Additional_Widget_Canvas_3 = CallFunc_Set_Additional_Widget_Canvas_3;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_4 = CallFunc_GetLocalizedTextFromHandle_Text_4;
	Parms.CallFunc_CreateContent_createdWidget_4 = CallFunc_CreateContent_createdWidget_4;
	Parms.CallFunc_GetRenderTransformAngle_ReturnValue = CallFunc_GetRenderTransformAngle_ReturnValue;
	Parms.CallFunc_Set_Additional_Widget_Canvas_4 = CallFunc_Set_Additional_Widget_Canvas_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WorkerRadialMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "Tick");

	Params::UWBP_WorkerRadialMenu_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WorkerRadialMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.OnClosed
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_WorkerRadialMenu_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "OnClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.ExecuteUbergraph_WBP_WorkerRadialMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::ExecuteUbergraph_WBP_WorkerRadialMenu(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "ExecuteUbergraph_WBP_WorkerRadialMenu");

	Params::UWBP_WorkerRadialMenu_C_ExecuteUbergraph_WBP_WorkerRadialMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller_1 = K2Node_DynamicCast_AsPal_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C.OnSelectedMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWorkerRadialMenuResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_C::OnSelectedMenu__DelegateSignature(enum class EPalWorkerRadialMenuResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_C", "OnSelectedMenu__DelegateSignature");

	Params::UWBP_WorkerRadialMenu_C_OnSelectedMenu__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}

}


