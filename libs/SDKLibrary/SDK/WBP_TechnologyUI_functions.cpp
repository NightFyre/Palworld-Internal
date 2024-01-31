#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TechnologyUI.WBP_TechnologyUI_C
// (None)

class UClass* UWBP_TechnologyUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TechnologyUI_C");

	return Clss;
}


// WBP_TechnologyUI_C WBP_TechnologyUI.Default__WBP_TechnologyUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TechnologyUI_C* UWBP_TechnologyUI_C::GetDefaultObj()
{
	static class UWBP_TechnologyUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TechnologyUI_C*>(UWBP_TechnologyUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.On Unlocked Any Technology
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::On_Unlocked_Any_Technology(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "On Unlocked Any Technology");

	Params::UWBP_TechnologyUI_C_On_Unlocked_Any_Technology_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Target                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_TechnologyUI_C::BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetTopFocusTarget_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_TechnologyUI_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTopFocusTarget_Target = CallFunc_GetTopFocusTarget_Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.OnUnhoveredTechnology
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Technology_Content_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedTechnologyName_technologyName                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistNewUnlockedTechnology_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNewUnlockedTechnology_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::OnUnhoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget, class FName CallFunc_GetBindedTechnologyName_technologyName, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsExistNewUnlockedTechnology_ReturnValue, bool CallFunc_IsNewUnlockedTechnology_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "OnUnhoveredTechnology");

	Params::UWBP_TechnologyUI_C_OnUnhoveredTechnology_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_GetBindedTechnologyName_technologyName = CallFunc_GetBindedTechnologyName_technologyName;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsExistNewUnlockedTechnology_ReturnValue = CallFunc_IsExistNewUnlockedTechnology_ReturnValue;
	Parms.CallFunc_IsNewUnlockedTechnology_ReturnValue = CallFunc_IsNewUnlockedTechnology_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.OnHoveredTechnology
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Technology_Content_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedTechnologyName_technologyName                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::OnHoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget, class FName CallFunc_GetBindedTechnologyName_technologyName, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "OnHoveredTechnology");

	Params::UWBP_TechnologyUI_C_OnHoveredTechnology_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_GetBindedTechnologyName_technologyName = CallFunc_GetBindedTechnologyName_technologyName;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_TechnologyUI_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "OnMouseMove");

	Params::UWBP_TechnologyUI_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1 = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.On Close Dialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedTechnologyName_technologyName                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::On_Close_Dialog(bool bResult, bool CallFunc_IsValid_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, class FName CallFunc_GetBindedTechnologyName_technologyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "On Close Dialog");

	Params::UWBP_TechnologyUI_C_On_Close_Dialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_GetBindedTechnologyName_technologyName = CallFunc_GetBindedTechnologyName_technologyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.OnClickedTechnology
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Technology_Content_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedTechnologyName_technologyName                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalTechnologyDataTableRowBaseCallFunc_GetTechlonogyBaseData_ReturnValue                       (ConstParm)
// bool                               CallFunc_IsUnlockableRecipeTechnology_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// bool                               CallFunc_IsUnlockRecipeTechnology_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue_1                          (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_TechnologyUI_C::OnClickedTechnology(class UWBP_MainMenu_Technology_Content_C* Widget, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, class FName CallFunc_GetBindedTechnologyName_technologyName, const struct FPalTechnologyDataTableRowBase& CallFunc_GetTechlonogyBaseData_ReturnValue, bool CallFunc_IsUnlockableRecipeTechnology_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, bool CallFunc_IsUnlockRecipeTechnology_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedText_ReturnValue_1, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "OnClickedTechnology");

	Params::UWBP_TechnologyUI_C_OnClickedTechnology_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_GetBindedTechnologyName_technologyName = CallFunc_GetBindedTechnologyName_technologyName;
	Parms.CallFunc_GetTechlonogyBaseData_ReturnValue = CallFunc_GetTechlonogyBaseData_ReturnValue;
	Parms.CallFunc_IsUnlockableRecipeTechnology_ReturnValue = CallFunc_IsUnlockableRecipeTechnology_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_IsUnlockRecipeTechnology_ReturnValue = CallFunc_IsUnlockRecipeTechnology_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedText_ReturnValue_1 = CallFunc_GetLocalizedText_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetTopUnlockableFocusTarget_Target                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::Setup(class UWidget* CallFunc_GetTopUnlockableFocusTarget_Target, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "Setup");

	Params::UWBP_TechnologyUI_C_Setup_Params Parms{};

	Parms.CallFunc_GetTopUnlockableFocusTarget_Target = CallFunc_GetTopUnlockableFocusTarget_Target;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TechnologyUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "Tick");

	Params::UWBP_TechnologyUI_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_3_OnClickedTchnology__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Technology_Content_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_3_OnClickedTchnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_3_OnClickedTchnology__DelegateSignature");

	Params::UWBP_TechnologyUI_C_BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_3_OnClickedTchnology__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_4_OnHoveredTechnology__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Technology_Content_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_4_OnHoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_4_OnHoveredTechnology__DelegateSignature");

	Params::UWBP_TechnologyUI_C_BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_4_OnHoveredTechnology__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_5_OnUnhoveredTechnology__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Technology_Content_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_5_OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_5_OnUnhoveredTechnology__DelegateSignature");

	Params::UWBP_TechnologyUI_C_BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_5_OnUnhoveredTechnology__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TechnologyUI_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.ExecuteUbergraph_WBP_TechnologyUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Technology_Content_C*K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Technology_Content_C*K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Technology_Content_C*K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::ExecuteUbergraph_WBP_TechnologyUI(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UWBP_MainMenu_Technology_Content_C* K2Node_ComponentBoundEvent_Widget_2, bool CallFunc_IsValid_ReturnValue, class UWBP_MainMenu_Technology_Content_C* K2Node_ComponentBoundEvent_Widget_1, class UWBP_MainMenu_Technology_Content_C* K2Node_ComponentBoundEvent_Widget, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "ExecuteUbergraph_WBP_TechnologyUI");

	Params::UWBP_TechnologyUI_C_ExecuteUbergraph_WBP_TechnologyUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TechnologyUI.WBP_TechnologyUI_C.OnAllClearedNewFlag__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalUIInGameMainMenuTabTypeTab                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TechnologyUI_C::OnAllClearedNewFlag__DelegateSignature(enum class EPalUIInGameMainMenuTabType Tab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TechnologyUI_C", "OnAllClearedNewFlag__DelegateSignature");

	Params::UWBP_TechnologyUI_C_OnAllClearedNewFlag__DelegateSignature_Params Parms{};

	Parms.Tab = Tab;

	UObject::ProcessEvent(Func, &Parms);

}

}


