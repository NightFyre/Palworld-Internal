#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalHUDLayout.WBP_PalHUDLayout_C
// (None)

class UClass* UWBP_PalHUDLayout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalHUDLayout_C");

	return Clss;
}


// WBP_PalHUDLayout_C WBP_PalHUDLayout.Default__WBP_PalHUDLayout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalHUDLayout_C* UWBP_PalHUDLayout_C::GetDefaultObj()
{
	static class UWBP_PalHUDLayout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalHUDLayout_C*>(UWBP_PalHUDLayout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.AddHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPalUserWidget*              Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ZOrder                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUDLayout_C::AddHUD(class UPalUserWidget* Widget, int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUDLayout_C", "AddHUD");

	Params::UWBP_PalHUDLayout_C_AddHUD_Params Parms{};

	Parms.Widget = Widget;
	Parms.ZOrder = ZOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.RemoveHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPalUserWidget*              Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUDLayout_C::RemoveHUD(class UPalUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUDLayout_C", "RemoveHUD");

	Params::UWBP_PalHUDLayout_C_RemoveHUD_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.AddWorldHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPalUserWidgetWorldHUD*      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUDLayout_C::AddWorldHUD(class UPalUserWidgetWorldHUD* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUDLayout_C", "AddWorldHUD");

	Params::UWBP_PalHUDLayout_C_AddWorldHUD_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.RemoveWorldHUD
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPalUserWidgetWorldHUD*      Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUDLayout_C::RemoveWorldHUD(class UPalUserWidgetWorldHUD* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUDLayout_C", "RemoveWorldHUD");

	Params::UWBP_PalHUDLayout_C_RemoveWorldHUD_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.ExecuteUbergraph_WBP_PalHUDLayout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalUserWidgetWorldHUD*      K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalUserWidgetWorldHUD*      K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FAnchorData                 CallFunc_GetLayout_ReturnValue                                   (NoDestructor)
// class UPalUserWidget*              K2Node_Event_Widget_2                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalUserWidget*              K2Node_Event_Widget_3                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ZOrder                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUDLayout_C::ExecuteUbergraph_WBP_PalHUDLayout(int32 EntryPoint, class UPalUserWidgetWorldHUD* K2Node_Event_Widget_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UPalUserWidgetWorldHUD* K2Node_Event_Widget, const struct FAnchorData& CallFunc_GetLayout_ReturnValue, class UPalUserWidget* K2Node_Event_Widget_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetSize_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UPalUserWidget* K2Node_Event_Widget_3, int32 K2Node_Event_ZOrder, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUDLayout_C", "ExecuteUbergraph_WBP_PalHUDLayout");

	Params::UWBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.CallFunc_GetLayout_ReturnValue = CallFunc_GetLayout_ReturnValue;
	Parms.K2Node_Event_Widget_2 = K2Node_Event_Widget_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.K2Node_Event_Widget_3 = K2Node_Event_Widget_3;
	Parms.K2Node_Event_ZOrder = K2Node_Event_ZOrder;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_1 = CallFunc_AddChildToCanvas_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


