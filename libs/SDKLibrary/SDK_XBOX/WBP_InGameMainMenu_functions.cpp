#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InGameMainMenu.WBP_InGameMainMenu_C
// (None)

class UClass* UWBP_InGameMainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InGameMainMenu_C");

	return Clss;
}


// WBP_InGameMainMenu_C WBP_InGameMainMenu.Default__WBP_InGameMainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InGameMainMenu_C* UWBP_InGameMainMenu_C::GetDefaultObj()
{
	static class UWBP_InGameMainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InGameMainMenu_C*>(UWBP_InGameMainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_InGameMainMenu_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_InGameMainMenu_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.SelectGuildTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_ForDisplay_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::SelectGuildTab(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_Guild_ForDisplay_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "SelectGuildTab");

	Params::UWBP_InGameMainMenu_C_SelectGuildTab_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.SelectInventoryEquipmentTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventoryEquipment_ForDisplay_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InGameMenuInventoryModel_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::SelectInventoryEquipmentTab(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_InventoryEquipment_ForDisplay_C* CallFunc_Create_ReturnValue, class UBP_InGameMenuInventoryModel_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "SelectInventoryEquipmentTab");

	Params::UWBP_InGameMainMenu_C_SelectInventoryEquipmentTab_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.SelectOptionTab
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_MenuESC_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::SelectOptionTab(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_MenuESC_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "SelectOptionTab");

	Params::UWBP_InGameMainMenu_C_SelectOptionTab_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.OnAllNewFlagCleared_PalDex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InGameMainMenu_C::OnAllNewFlagCleared_PalDex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "OnAllNewFlagCleared_PalDex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.On Unused Status Points Changed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              UnusedPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Tab_C*         CallFunc_GetTabWidgetByMenuType_TabWidget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::On_Unused_Status_Points_Changed(int32 UnusedPoint, bool CallFunc_Greater_IntInt_ReturnValue, class UWBP_MainMenu_Tab_C* CallFunc_GetTabWidgetByMenuType_TabWidget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "On Unused Status Points Changed");

	Params::UWBP_InGameMainMenu_C_On_Unused_Status_Points_Changed_Params Parms{};

	Parms.UnusedPoint = UnusedPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetTabWidgetByMenuType_TabWidget = CallFunc_GetTabWidgetByMenuType_TabWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.SetupAllAttentionDot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::SetupAllAttentionDot(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "SetupAllAttentionDot");

	Params::UWBP_InGameMainMenu_C_SetupAllAttentionDot_Params Parms{};

	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.Setup Attention Dot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalUIInGameMainMenuTabTypeTab                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerLocalRecordData*   CallFunc_GetLocalRecordData_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Tab_C*         CallFunc_GetTabWidgetByMenuType_TabWidget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUnusedStatusPoint_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalTechnologyData*          CallFunc_GetLocalTechnologyData_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistNewUnlockedTechnology_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::Setup_Attention_Dot(enum class EPalUIInGameMainMenuTabType Tab, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<bool>& CallFunc_Map_Values_Values, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_MainMenu_Tab_C* CallFunc_GetTabWidgetByMenuType_TabWidget, bool CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_GetUnusedStatusPoint_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsExistNewUnlockedTechnology_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "Setup Attention Dot");

	Params::UWBP_InGameMainMenu_C_Setup_Attention_Dot_Params Parms{};

	Parms.Tab = Tab;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalRecordData_ReturnValue = CallFunc_GetLocalRecordData_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetTabWidgetByMenuType_TabWidget = CallFunc_GetTabWidgetByMenuType_TabWidget;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetUnusedStatusPoint_ReturnValue = CallFunc_GetUnusedStatusPoint_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalTechnologyData_ReturnValue = CallFunc_GetLocalTechnologyData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsExistNewUnlockedTechnology_ReturnValue = CallFunc_IsExistNewUnlockedTechnology_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.OnChangedTabIndexEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     FocusTargetWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Tab_C*         K2Node_DynamicCast_AsWBP_Main_Menu_Tab                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::OnChangedTabIndexEvent(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget, bool CallFunc_NotEqual_IntInt_ReturnValue, class UWBP_MainMenu_Tab_C* K2Node_DynamicCast_AsWBP_Main_Menu_Tab, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "OnChangedTabIndexEvent");

	Params::UWBP_InGameMainMenu_C_OnChangedTabIndexEvent_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;
	Parms.FocusTargetWidget = FocusTargetWidget;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Main_Menu_Tab = K2Node_DynamicCast_AsWBP_Main_Menu_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.SelectPaldexTab
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_ForDisplay_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::SelectPaldexTab(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_Paldex_ForDisplay_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "SelectPaldexTab");

	Params::UWBP_InGameMainMenu_C_SelectPaldexTab_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.SetupBgText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalUIInGameMainMenuTabTypeType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)

void UWBP_InGameMainMenu_C::SetupBgText(enum class EPalUIInGameMainMenuTabType Type, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "SetupBgText");

	Params::UWBP_InGameMainMenu_C_SetupBgText_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalStatus_C*            K2Node_DynamicCast_AsWBP_Pal_Status                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Editing_Nick_Name_isEditing                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldBackList_shouldBack                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Guild_ForDisplay_C*     K2Node_DynamicCast_AsWBP_Guild_for_Display                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanClose_CanCloseFlag                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventoryEquipment_ForDisplay_C*K2Node_DynamicCast_AsWBP_Inventory_Equipment_for_Display         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSimulatingStatusPoint_IsSimulating                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::OnCancelAction(class UWBP_PalStatus_C* K2Node_DynamicCast_AsWBP_Pal_Status, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Is_Editing_Nick_Name_isEditing, bool CallFunc_ShouldBackList_shouldBack, class UWBP_Guild_ForDisplay_C* K2Node_DynamicCast_AsWBP_Guild_for_Display, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanClose_CanCloseFlag, class UWBP_InventoryEquipment_ForDisplay_C* K2Node_DynamicCast_AsWBP_Inventory_Equipment_for_Display, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsSimulatingStatusPoint_IsSimulating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "OnCancelAction");

	Params::UWBP_InGameMainMenu_C_OnCancelAction_Params Parms{};

	Parms.K2Node_DynamicCast_AsWBP_Pal_Status = K2Node_DynamicCast_AsWBP_Pal_Status;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Is_Editing_Nick_Name_isEditing = CallFunc_Is_Editing_Nick_Name_isEditing;
	Parms.CallFunc_ShouldBackList_shouldBack = CallFunc_ShouldBackList_shouldBack;
	Parms.K2Node_DynamicCast_AsWBP_Guild_for_Display = K2Node_DynamicCast_AsWBP_Guild_for_Display;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanClose_CanCloseFlag = CallFunc_CanClose_CanCloseFlag;
	Parms.K2Node_DynamicCast_AsWBP_Inventory_Equipment_for_Display = K2Node_DynamicCast_AsWBP_Inventory_Equipment_for_Display;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsSimulatingStatusPoint_IsSimulating = CallFunc_IsSimulatingStatusPoint_IsSimulating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.AddChildToContentBody
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalUserWidget*              Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::AddChildToContentBody(class UPalUserWidget* Widget, const struct FAnchors& K2Node_MakeStruct_Anchors, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "AddChildToContentBody");

	Params::UWBP_InGameMainMenu_C_AddChildToContentBody_Params Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.OnNextTabAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InGameMainMenu_C::OnNextTabAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "OnNextTabAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.OnPrevTabAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InGameMainMenu_C::OnPrevTabAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "OnPrevTabAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.SelectPalTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterHandle*>CallFunc_GetAllIndividualHandle_OutArray                         (ReferenceParm)
// class UWBP_PalStatus_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::SelectPalTab(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UPalIndividualCharacterHandle*>& CallFunc_GetAllIndividualHandle_OutArray, class UWBP_PalStatus_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "SelectPalTab");

	Params::UWBP_InGameMainMenu_C_SelectPalTab_Params Parms{};

	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetAllIndividualHandle_OutArray = CallFunc_GetAllIndividualHandle_OutArray;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.SelectTechnologyTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_TechnologyUI_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::SelectTechnologyTab(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_TechnologyUI_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "SelectTechnologyTab");

	Params::UWBP_InGameMainMenu_C_SelectTechnologyTab_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.SelectTab
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalUIInGameMainMenuTabTypeTabType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::SelectTab(enum class EPalUIInGameMainMenuTabType TabType, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "SelectTab");

	Params::UWBP_InGameMainMenu_C_SelectTab_Params Parms{};

	Parms.TabType = TabType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.SetupInputAction
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_2                     (NoDestructor)

void UWBP_InGameMainMenu_C::SetupInputAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "SetupInputAction");

	Params::UWBP_InGameMainMenu_C_SetupInputAction_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_2 = CallFunc_RegisterActionBinding_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.AnmEvent_AllOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InGameMainMenu_C::AnmEvent_AllOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "AnmEvent_AllOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InGameMainMenu_C::BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InGameMainMenu_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InGameMainMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InGameMainMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InGameMainMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InGameMainMenu.WBP_InGameMainMenu_C.ExecuteUbergraph_WBP_InGameMainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InGameMainMenuParameter_C*K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Parameter              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMainMenu_C::ExecuteUbergraph_WBP_InGameMainMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_InGameMainMenuParameter_C* K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Parameter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InGameMainMenu_C", "ExecuteUbergraph_WBP_InGameMainMenu");

	Params::UWBP_InGameMainMenu_C_ExecuteUbergraph_WBP_InGameMainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Parameter = K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


