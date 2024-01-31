#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C
// (None)

class UClass* UWBP_InventoryEquipment_UseItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_UseItem_C");

	return Clss;
}


// WBP_InventoryEquipment_UseItem_C WBP_InventoryEquipment_UseItem.Default__WBP_InventoryEquipment_UseItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_UseItem_C* UWBP_InventoryEquipment_UseItem_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_UseItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_UseItem_C*>(UWBP_InventoryEquipment_UseItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.TryPlayEatSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StaticItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*TargetCharacterParameter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalIndividualCharacterSaveParameterCallFunc_GetSaveParameter_ReturnValue                            (ConstParm)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::TryPlayEatSound(class FName StaticItemId, class UPalIndividualCharacterParameter* TargetCharacterParameter, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetSaveParameter_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "TryPlayEatSound");

	Params::UWBP_InventoryEquipment_UseItem_C_TryPlayEatSound_Params Parms{};

	Parms.StaticItemId = StaticItemId;
	Parms.TargetCharacterParameter = TargetCharacterParameter;
	Parms.CallFunc_GetSaveParameter_ReturnValue = CallFunc_GetSaveParameter_ReturnValue;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_InventoryEquipment_UseItem_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_InventoryEquipment_UseItem_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                SelectedItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::Setup(class UPalItemSlot* SelectedItemSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "Setup");

	Params::UWBP_InventoryEquipment_UseItem_C_Setup_Params Parms{};

	Parms.SelectedItemSlot = SelectedItemSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_UseItem_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.UseItemTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Individual                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::UseItemTo(class UPalIndividualCharacterHandle* Individual)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "UseItemTo");

	Params::UWBP_InventoryEquipment_UseItem_C_UseItemTo_Params Parms{};

	Parms.Individual = Individual;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnUseupItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_UseItem_C::OnUseupItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnUseupItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.ResetCacheUseAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::ResetCacheUseAmount(class UPalItemSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "ResetCacheUseAmount");

	Params::UWBP_InventoryEquipment_UseItem_C_ResetCacheUseAmount_Params Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_UseItem_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnWazaMachineUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter*IndividualParameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              WazaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::OnWazaMachineUsed(class UPalIndividualCharacterParameter* IndividualParameter, enum class EPalWazaID WazaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnWazaMachineUsed");

	Params::UWBP_InventoryEquipment_UseItem_C_OnWazaMachineUsed_Params Parms{};

	Parms.IndividualParameter = IndividualParameter;
	Parms.WazaID = WazaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsConfirm                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::Refresh(bool IsConfirm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "Refresh");

	Params::UWBP_InventoryEquipment_UseItem_C_Refresh_Params Parms{};

	Parms.IsConfirm = IsConfirm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.BndEvt__WBP_InventoryEquipment_UseItem_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_UseItem_C::BndEvt__WBP_InventoryEquipment_UseItem_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "BndEvt__WBP_InventoryEquipment_UseItem_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_UseItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnMedineUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_UseItem_C::OnMedineUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "OnMedineUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.ShowPalDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Individual                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::ShowPalDetail(class UPalIndividualCharacterHandle* Individual)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "ShowPalDetail");

	Params::UWBP_InventoryEquipment_UseItem_C_ShowPalDetail_Params Parms{};

	Parms.Individual = Individual;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.HidePalDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_UseItem_C::HidePalDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "HidePalDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.ExecuteUbergraph_WBP_InventoryEquipment_UseItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                K2Node_CustomEvent_SelectedItemSlot                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Menu_PalList_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetOtomoHolderComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterHandle*>CallFunc_GetAllIndividualHandle_OutArray                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_Menu_PalList_C*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_CustomEvent_Individual_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                K2Node_CustomEvent_targetSlot                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemSlotId              CallFunc_GetSlotId_ReturnValue                                   (NoDestructor, HasGetValueTypeHash)
// struct FPalItemSlotIdAndNum        K2Node_MakeStruct_PalItemSlotIdAndNum                            (NoDestructor)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Menu_PalList_C*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticConsumeItemData*   K2Node_DynamicCast_AsPal_Static_Consume_Item_Data                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InGameMainMenuUseItemParameter_C*K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Use_Item_Parameter     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*K2Node_CustomEvent_IndividualParameter                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              K2Node_CustomEvent_WazaId                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWazaName_outName                                     (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsConfirm                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// bool                               CallFunc_IsStatusPointResetItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseTargetMedicine_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseTargetMedicine_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBaseCampWorkerSickTypeCallFunc_GetWorkerSick_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName_1                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_CustomEvent_Individual                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_UseItem_C::ExecuteUbergraph_WBP_InventoryEquipment_UseItem(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalItemSlot* K2Node_CustomEvent_SelectedItemSlot, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TArray<class UPalIndividualCharacterHandle*>& CallFunc_GetAllIndividualHandle_OutArray, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class UWBP_Menu_PalList_C*>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_1, class UPalIndividualCharacterHandle* K2Node_CustomEvent_Individual_1, int32 Temp_int_Variable, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalItemSlot* K2Node_CustomEvent_targetSlot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FPalItemSlotId& CallFunc_GetSlotId_ReturnValue, const struct FPalItemSlotIdAndNum& K2Node_MakeStruct_PalItemSlotIdAndNum, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item_1, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item_2, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, class UPalStaticConsumeItemData* K2Node_DynamicCast_AsPal_Static_Consume_Item_Data, bool K2Node_DynamicCast_bSuccess, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_InGameMainMenuUseItemParameter_C* K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Use_Item_Parameter, bool K2Node_DynamicCast_bSuccess_1, class UPalIndividualCharacterParameter* K2Node_CustomEvent_IndividualParameter, enum class EPalWazaID K2Node_CustomEvent_WazaId, class FText CallFunc_GetWazaName_outName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_IsConfirm, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_Format_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, bool CallFunc_IsStatusPointResetItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CanUseTargetMedicine_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_CanUseTargetMedicine_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, bool CallFunc_IsValid_ReturnValue_6, enum class EPalBaseCampWorkerSickType CallFunc_GetWorkerSick_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const class FString& CallFunc_GetNickName_outName_1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UPalIndividualCharacterHandle* K2Node_CustomEvent_Individual, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "ExecuteUbergraph_WBP_InventoryEquipment_UseItem");

	Params::UWBP_InventoryEquipment_UseItem_C_ExecuteUbergraph_WBP_InventoryEquipment_UseItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.K2Node_CustomEvent_SelectedItemSlot = K2Node_CustomEvent_SelectedItemSlot;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOtomoHolderComponent_ReturnValue = CallFunc_GetOtomoHolderComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAllIndividualHandle_OutArray = CallFunc_GetAllIndividualHandle_OutArray;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Individual_1 = K2Node_CustomEvent_Individual_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_targetSlot = K2Node_CustomEvent_targetSlot;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetSlotId_ReturnValue = CallFunc_GetSlotId_ReturnValue;
	Parms.K2Node_MakeStruct_PalItemSlotIdAndNum = K2Node_MakeStruct_PalItemSlotIdAndNum;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue_1 = CallFunc_TryGetIndividualParameter_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsPal_Static_Consume_Item_Data = K2Node_DynamicCast_AsPal_Static_Consume_Item_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Use_Item_Parameter = K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Use_Item_Parameter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_IndividualParameter = K2Node_CustomEvent_IndividualParameter;
	Parms.K2Node_CustomEvent_WazaId = K2Node_CustomEvent_WazaId;
	Parms.CallFunc_GetWazaName_outName = CallFunc_GetWazaName_outName;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_IsConfirm = K2Node_CustomEvent_IsConfirm;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_IsStatusPointResetItem_ReturnValue = CallFunc_IsStatusPointResetItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CanUseTargetMedicine_ReturnValue = CallFunc_CanUseTargetMedicine_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_CanUseTargetMedicine_ReturnValue_1 = CallFunc_CanUseTargetMedicine_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetWorkerSick_ReturnValue = CallFunc_GetWorkerSick_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetNickName_outName_1 = CallFunc_GetNickName_outName_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_Individual = K2Node_CustomEvent_Individual;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.EndUseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_UseItem_C::EndUseItem__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_UseItem_C", "EndUseItem__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


