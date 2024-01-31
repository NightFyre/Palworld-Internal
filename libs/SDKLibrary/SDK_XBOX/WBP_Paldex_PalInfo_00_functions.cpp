#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C
// (None)

class UClass* UWBP_Paldex_PalInfo_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Paldex_PalInfo_00_C");

	return Clss;
}


// WBP_Paldex_PalInfo_00_C WBP_Paldex_PalInfo_00.Default__WBP_Paldex_PalInfo_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Paldex_PalInfo_00_C* UWBP_Paldex_PalInfo_00_C::GetDefaultObj()
{
	static class UWBP_Paldex_PalInfo_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Paldex_PalInfo_00_C*>(UWBP_Paldex_PalInfo_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.HideDropItems
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_DropItem_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_PalInfo_00_C::HideDropItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Paldex_DropItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_PalInfo_00_C", "HideDropItems");

	Params::UWBP_Paldex_PalInfo_00_C_HideDropItems_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup_Captured
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo    DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPalFirstActivatedInfo_outName                        (None)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_DropItem_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalTribeID             CallFunc_GetTribe_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerRecordData*        CallFunc_GetLocalRecordData_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRecordData_TribeIdCount_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_DropItem_C*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoodAmount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalDropItemDatabaseRow     CallFunc_GetDropItemData_outData                                 (None)
// bool                               CallFunc_GetDropItemData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPartnerSkillMsgID_OutMsgID                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_PalInfo_00_C::Setup_Captured(const struct FPalUIPaldex_DisplayInfo& DisplayInfo, int32 Temp_int_Array_Index_Variable, class FText CallFunc_GetPalFirstActivatedInfo_outName, int32 CallFunc_Array_LastIndex_ReturnValue, class UWBP_Paldex_DropItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, enum class EPalTribeID CallFunc_GetTribe_ReturnValue, class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue, int32 CallFunc_GetRecordData_TribeIdCount_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, class UWBP_Paldex_DropItem_C* CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetFoodAmount_ReturnValue, const struct FPalDropItemDatabaseRow& CallFunc_GetDropItemData_outData, bool CallFunc_GetDropItemData_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_2, class FName CallFunc_GetPartnerSkillMsgID_OutMsgID, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_GetLocalizedText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_PalInfo_00_C", "Setup_Captured");

	Params::UWBP_Paldex_PalInfo_00_C_Setup_Captured_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPalFirstActivatedInfo_outName = CallFunc_GetPalFirstActivatedInfo_outName;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetTribe_ReturnValue = CallFunc_GetTribe_ReturnValue;
	Parms.CallFunc_GetLocalRecordData_ReturnValue = CallFunc_GetLocalRecordData_ReturnValue;
	Parms.CallFunc_GetRecordData_TribeIdCount_ReturnValue = CallFunc_GetRecordData_TribeIdCount_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_1 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetFoodAmount_ReturnValue = CallFunc_GetFoodAmount_ReturnValue;
	Parms.CallFunc_GetDropItemData_outData = CallFunc_GetDropItemData_outData;
	Parms.CallFunc_GetDropItemData_ReturnValue = CallFunc_GetDropItemData_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_2 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_2;
	Parms.CallFunc_GetPartnerSkillMsgID_OutMsgID = CallFunc_GetPartnerSkillMsgID_OutMsgID;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup_Encounted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo    DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Paldex_PalInfo_00_C::Setup_Encounted(const struct FPalUIPaldex_DisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_PalInfo_00_C", "Setup_Encounted");

	Params::UWBP_Paldex_PalInfo_00_C_Setup_Encounted_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup_NotEncounted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo    DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Paldex_PalInfo_00_C::Setup_NotEncounted(const struct FPalUIPaldex_DisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_PalInfo_00_C", "Setup_NotEncounted");

	Params::UWBP_Paldex_PalInfo_00_C_Setup_NotEncounted_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo    DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalTribeID             CallFunc_GetTribe_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EPalWorkSuitability, int32>CallFunc_GetWorkSuitabilityRank_WorkSuitabilities                (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerRecordData*        CallFunc_GetLocalRecordData_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRecordData_TribeIdCount_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_PalInfo_00_C::Setup(const struct FPalUIPaldex_DisplayInfo& DisplayInfo, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_1, enum class EPalTribeID CallFunc_GetTribe_ReturnValue, TMap<enum class EPalWorkSuitability, int32> CallFunc_GetWorkSuitabilityRank_WorkSuitabilities, bool K2Node_SwitchEnum_CmpSuccess, class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue, int32 CallFunc_GetRecordData_TribeIdCount_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_PalInfo_00_C", "Setup");

	Params::UWBP_Paldex_PalInfo_00_C_Setup_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue_1 = CallFunc_GetDatabaseCharacterParameter_ReturnValue_1;
	Parms.CallFunc_GetTribe_ReturnValue = CallFunc_GetTribe_ReturnValue;
	Parms.CallFunc_GetWorkSuitabilityRank_WorkSuitabilities = CallFunc_GetWorkSuitabilityRank_WorkSuitabilities;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalRecordData_ReturnValue = CallFunc_GetLocalRecordData_ReturnValue;
	Parms.CallFunc_GetRecordData_TribeIdCount_ReturnValue = CallFunc_GetRecordData_TribeIdCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Paldex_PalInfo_00_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_PalInfo_00_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.ExecuteUbergraph_WBP_Paldex_PalInfo_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_Paldex_DropItem_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_Paldex_PalInfo_00_C::ExecuteUbergraph_WBP_Paldex_PalInfo_00(int32 EntryPoint, TArray<class UWBP_Paldex_DropItem_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_PalInfo_00_C", "ExecuteUbergraph_WBP_Paldex_PalInfo_00");

	Params::UWBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


