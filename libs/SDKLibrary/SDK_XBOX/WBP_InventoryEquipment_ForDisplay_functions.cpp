#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C
// (None)

class UClass* UWBP_InventoryEquipment_ForDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_ForDisplay_C");

	return Clss;
}


// WBP_InventoryEquipment_ForDisplay_C WBP_InventoryEquipment_ForDisplay.Default__WBP_InventoryEquipment_ForDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_ForDisplay_C* UWBP_InventoryEquipment_ForDisplay_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_ForDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_ForDisplay_C*>(UWBP_InventoryEquipment_ForDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.OnEndGlide
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_ForDisplay_C::OnEndGlide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "OnEndGlide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.OnStartGlide
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_ForDisplay_C::OnStartGlide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "OnStartGlide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.Try Start Simulate Status Point
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSimulatingStatusPoint_IsSimulating                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUnusedStatusPoint_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ForDisplay_C::Try_Start_Simulate_Status_Point(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsSimulatingStatusPoint_IsSimulating, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, int32 CallFunc_GetUnusedStatusPoint_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "Try Start Simulate Status Point");

	Params::UWBP_InventoryEquipment_ForDisplay_C_Try_Start_Simulate_Status_Point_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_IsSimulatingStatusPoint_IsSimulating = CallFunc_IsSimulatingStatusPoint_IsSimulating;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetUnusedStatusPoint_ReturnValue = CallFunc_GetUnusedStatusPoint_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.Setup Static Input Action
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)

void UWBP_InventoryEquipment_ForDisplay_C::Setup_Static_Input_Action(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "Setup Static Input Action");

	Params::UWBP_InventoryEquipment_ForDisplay_C_Setup_Static_Input_Action_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.CancelSimulateStatusPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_ForDisplay_C::CancelSimulateStatusPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "CancelSimulateStatusPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.IsSimulatingStatusPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsSimulating                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ForDisplay_C::IsSimulatingStatusPoint(bool* IsSimulating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "IsSimulatingStatusPoint");

	Params::UWBP_InventoryEquipment_ForDisplay_C_IsSimulatingStatusPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSimulating != nullptr)
		*IsSimulating = Parms.IsSimulating;

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSimulatingStatusPoint_IsSimulating                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetStatusPointTopFocusTarget_TargetWidget               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Get_Inventory_Last_Focus_Target_TargetWidget            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_InventoryEquipment_ForDisplay_C::BP_GetDesiredFocusTarget(bool CallFunc_IsSimulatingStatusPoint_IsSimulating, class UWidget* CallFunc_GetStatusPointTopFocusTarget_TargetWidget, class UWidget* CallFunc_Get_Inventory_Last_Focus_Target_TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_InventoryEquipment_ForDisplay_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_IsSimulatingStatusPoint_IsSimulating = CallFunc_IsSimulatingStatusPoint_IsSimulating;
	Parms.CallFunc_GetStatusPointTopFocusTarget_TargetWidget = CallFunc_GetStatusPointTopFocusTarget_TargetWidget;
	Parms.CallFunc_Get_Inventory_Last_Focus_Target_TargetWidget = CallFunc_Get_Inventory_Last_Focus_Target_TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.OnUpdateInventoryWeight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NowWeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetInventoryWeight_NowWeight_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetInventoryWeight_MaxWeight_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ForDisplay_C::OnUpdateInventoryWeight(float NowWeight, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, double CallFunc_SetInventoryWeight_NowWeight_ImplicitCast, double CallFunc_SetInventoryWeight_MaxWeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "OnUpdateInventoryWeight");

	Params::UWBP_InventoryEquipment_ForDisplay_C_OnUpdateInventoryWeight_Params Parms{};

	Parms.NowWeight = NowWeight;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_SetInventoryWeight_NowWeight_ImplicitCast = CallFunc_SetInventoryWeight_NowWeight_ImplicitCast;
	Parms.CallFunc_SetInventoryWeight_MaxWeight_ImplicitCast = CallFunc_SetInventoryWeight_MaxWeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_InGameMenuInventoryModel_C*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ForDisplay_C::Setup(class UBP_InGameMenuInventoryModel_C* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "Setup");

	Params::UWBP_InventoryEquipment_ForDisplay_C_Setup_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_ForDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_0_OnClickedItemDrop__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_ForDisplay_C::BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_0_OnClickedItemDrop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_0_OnClickedItemDrop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_1_OnClickedItemDestroy__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_ForDisplay_C::BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_1_OnClickedItemDestroy__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_1_OnClickedItemDestroy__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_2_OnConfirmStatusPointEdit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TMap<class FName, int32>           PointMap                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryEquipment_ForDisplay_C::BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_2_OnConfirmStatusPointEdit__DelegateSignature(TMap<class FName, int32> PointMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_2_OnConfirmStatusPointEdit__DelegateSignature");

	Params::UWBP_InventoryEquipment_ForDisplay_C_BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_2_OnConfirmStatusPointEdit__DelegateSignature_Params Parms{};

	Parms.PointMap = PointMap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_3_OnRequestSwapEquipment__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EPalPlayerEquipItemSlotTypeEquipType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ForDisplay_C::BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_3_OnRequestSwapEquipment__DelegateSignature(enum class EPalPlayerEquipItemSlotType EquipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_3_OnRequestSwapEquipment__DelegateSignature");

	Params::UWBP_InventoryEquipment_ForDisplay_C_BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_3_OnRequestSwapEquipment__DelegateSignature_Params Parms{};

	Parms.EquipType = EquipType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_4_OnClickedSortButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_ForDisplay_C::BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_4_OnClickedSortButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_4_OnClickedSortButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_ForDisplay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.ExecuteUbergraph_WBP_InventoryEquipment_ForDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, int32>           K2Node_ComponentBoundEvent_PointMap                              (None)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalPlayerEquipItemSlotTypeK2Node_ComponentBoundEvent_EquipType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGliderComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGliding_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ForDisplay_C::ExecuteUbergraph_WBP_InventoryEquipment_ForDisplay(int32 EntryPoint, TMap<class FName, int32> K2Node_ComponentBoundEvent_PointMap, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EPalPlayerEquipItemSlotType K2Node_ComponentBoundEvent_EquipType, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalGliderComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsGliding_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ForDisplay_C", "ExecuteUbergraph_WBP_InventoryEquipment_ForDisplay");

	Params::UWBP_InventoryEquipment_ForDisplay_C_ExecuteUbergraph_WBP_InventoryEquipment_ForDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_PointMap = K2Node_ComponentBoundEvent_PointMap;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_EquipType = K2Node_ComponentBoundEvent_EquipType;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsGliding_ReturnValue = CallFunc_IsGliding_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


