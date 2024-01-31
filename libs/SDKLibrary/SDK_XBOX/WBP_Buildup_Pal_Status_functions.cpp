#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C
// (None)

class UClass* UWBP_Buildup_Pal_Status_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Buildup_Pal_Status_C");

	return Clss;
}


// WBP_Buildup_Pal_Status_C WBP_Buildup_Pal_Status.Default__WBP_Buildup_Pal_Status_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Buildup_Pal_Status_C* UWBP_Buildup_Pal_Status_C::GetDefaultObj()
{
	static class UWBP_Buildup_Pal_Status_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Buildup_Pal_Status_C*>(UWBP_Buildup_Pal_Status_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.UpdateItemSufficiency
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Buildup_Pal_StatusContent_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalCharacterStatusOperationNameCallFunc_Get_Status_Status                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRequiredItemCountForCharacterStatus_OutStaticItemId  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRequiredItemCountForCharacterStatus_OutItemNum       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FPalStaticItemIdAndNum>CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos    (ReferenceParm)
// struct FPalStaticItemIdAndNum      CallFunc_Array_Get_Item_1                                        (NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Status_C::UpdateItemSufficiency(class UPalIndividualCharacterHandle* Handle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EPalCharacterStatusOperationName CallFunc_Get_Status_Status, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_GetRequiredItemCountForCharacterStatus_OutStaticItemId, int32 CallFunc_GetRequiredItemCountForCharacterStatus_OutItemNum, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "UpdateItemSufficiency");

	Params::UWBP_Buildup_Pal_Status_C_UpdateItemSufficiency_Params Parms{};

	Parms.Handle = Handle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Get_Status_Status = CallFunc_Get_Status_Status;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRequiredItemCountForCharacterStatus_OutStaticItemId = CallFunc_GetRequiredItemCountForCharacterStatus_OutStaticItemId;
	Parms.CallFunc_GetRequiredItemCountForCharacterStatus_OutItemNum = CallFunc_GetRequiredItemCountForCharacterStatus_OutItemNum;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos = CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.Predict Status
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalCharacterStatusOperationNameStatus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetRank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Buildup_Pal_StatusContent_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Buildup_Pal_StatusContent_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Status_C::Predict_Status(enum class EPalCharacterStatusOperationName Status, int32 TargetRank, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue_1, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "Predict Status");

	Params::UWBP_Buildup_Pal_Status_C_Predict_Status_Params Parms{};

	Parms.Status = Status;
	Parms.TargetRank = TargetRank;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.Update Confirm Button State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMoneyData*               CallFunc_GetLocalMoneyData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetNowMoney_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Status_C::Update_Confirm_Button_State(bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalMoneyData* CallFunc_GetLocalMoneyData_ReturnValue, bool CallFunc_IsValid_ReturnValue, int64 CallFunc_GetNowMoney_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "Update Confirm Button State");

	Params::UWBP_Buildup_Pal_Status_C_Update_Confirm_Button_State_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLocalMoneyData_ReturnValue = CallFunc_GetLocalMoneyData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNowMoney_ReturnValue = CallFunc_GetNowMoney_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_Int64Int64_ReturnValue = CallFunc_Less_Int64Int64_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Status_C::GetFocusTarget(class UUserWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "GetFocusTarget");

	Params::UWBP_Buildup_Pal_Status_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.On Money Changed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              NewMoney                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Status_C::On_Money_Changed(int64 NewMoney, bool Temp_bool_Variable, class FText CallFunc_Conv_Int64ToText_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "On Money Changed");

	Params::UWBP_Buildup_Pal_Status_C_On_Money_Changed_Params Parms{};

	Parms.NewMoney = NewMoney;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Less_Int64Int64_ReturnValue = CallFunc_Less_Int64Int64_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                ItemIds                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, int32>           CallFunc_GetReturnItemsForResetCharacterStatusAll_ReturnValue    (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMoneyData*               CallFunc_GetLocalMoneyData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetNowMoney_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Buildup_Pal_Item_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRequiredMoneyCountForResetCharacterStatusAll_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Buildup_Pal_StatusContent_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalCharacterStatusOperationNameCallFunc_Get_Status_Status                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentStatusRank_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRequiredItemCountForCharacterStatus_OutStaticItemId  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRequiredItemCountForCharacterStatus_OutItemNum       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalStaticItemIdAndNum>CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos    (ReferenceParm)
// struct FPalStaticItemIdAndNum      CallFunc_Array_Get_Item_3                                        (NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Status_C::Setup(class UPalIndividualCharacterHandle* Handle, TArray<class FName>& ItemIds, int32 Temp_int_Array_Index_Variable, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, TMap<class FName, int32> CallFunc_GetReturnItemsForResetCharacterStatusAll_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMaterialInterface* Temp_object_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, class UPalMoneyData* CallFunc_GetLocalMoneyData_ReturnValue, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue_1, int64 CallFunc_GetNowMoney_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue, class FName CallFunc_Array_Get_Item, class FText CallFunc_Conv_Int64ToText_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWBP_Buildup_Pal_Item_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetRequiredMoneyCountForResetCharacterStatusAll_ReturnValue, bool Temp_bool_Variable, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item_2, enum class EPalCharacterStatusOperationName CallFunc_Get_Status_Status, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_GetCurrentStatusRank_ReturnValue, class FName CallFunc_GetRequiredItemCountForCharacterStatus_OutStaticItemId, int32 CallFunc_GetRequiredItemCountForCharacterStatus_OutItemNum, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "Setup");

	Params::UWBP_Buildup_Pal_Status_C_Setup_Params Parms{};

	Parms.Handle = Handle;
	Parms.ItemIds = ItemIds;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetReturnItemsForResetCharacterStatusAll_ReturnValue = CallFunc_GetReturnItemsForResetCharacterStatusAll_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_GetLocalMoneyData_ReturnValue = CallFunc_GetLocalMoneyData_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetNowMoney_ReturnValue = CallFunc_GetNowMoney_ReturnValue;
	Parms.CallFunc_Less_Int64Int64_ReturnValue = CallFunc_Less_Int64Int64_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetRequiredMoneyCountForResetCharacterStatusAll_ReturnValue = CallFunc_GetRequiredMoneyCountForResetCharacterStatusAll_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Get_Status_Status = CallFunc_Get_Status_Status;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurrentStatusRank_ReturnValue = CallFunc_GetCurrentStatusRank_ReturnValue;
	Parms.CallFunc_GetRequiredItemCountForCharacterStatus_OutStaticItemId = CallFunc_GetRequiredItemCountForCharacterStatus_OutStaticItemId;
	Parms.CallFunc_GetRequiredItemCountForCharacterStatus_OutItemNum = CallFunc_GetRequiredItemCountForCharacterStatus_OutItemNum;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos = CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.SwitchPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUpgrade                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Status_C::SwitchPanel(bool IsUpgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "SwitchPanel");

	Params::UWBP_Buildup_Pal_Status_C_SwitchPanel_Params Parms{};

	Parms.IsUpgrade = IsUpgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Buildup_Pal_Status_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.BndEvt__WBP_Buildup_Pal_Status_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Buildup_Pal_Status_C::BndEvt__WBP_Buildup_Pal_Status_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "BndEvt__WBP_Buildup_Pal_Status_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.ConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Status_C::ConfirmDialog(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "ConfirmDialog");

	Params::UWBP_Buildup_Pal_Status_C_ConfirmDialog_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.EmptyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Status_C::EmptyEvent(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "EmptyEvent");

	Params::UWBP_Buildup_Pal_Status_C_EmptyEvent_Params Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.ShowResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Buildup_Pal_Status_C::ShowResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "ShowResult");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.ExecuteUbergraph_WBP_Buildup_Pal_Status
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsUpgrade                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_Buildup_Pal_StatusContent_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UWBP_Buildup_Pal_StatusContent_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalCharacterStatusOperationNameCallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirmed                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Buildup_Pal_StatusContent_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class FText                        CallFunc_SelectText_ReturnValue                                  (None)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_2                       (None)
// TArray<class UWBP_Buildup_Pal_Item_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class UWBP_Buildup_Pal_Item_C*     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMoneyData*               CallFunc_GetLocalMoneyData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetFocusTarget_Widget                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Buildup_Pal_StatusContent_C*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemAndNum_ItemIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemAndNum_Num                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_outName                                     (None)
// class FName                        CallFunc_StaticItemID_Money_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_outName_1                                   (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_SelectText_ReturnValue_1                                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Buildup_Pal_StatusContent_C*CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bResult                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_3                       (None)

void UWBP_Buildup_Pal_Status_C::ExecuteUbergraph_WBP_Buildup_Pal_Status(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool K2Node_CustomEvent_IsUpgrade, TArray<class UWBP_Buildup_Pal_StatusContent_C*>& K2Node_MakeArray_Array, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class EPalCharacterStatusOperationName CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Confirmed, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_SelectText_ReturnValue, const struct FDataTableRowHandle& K2Node_Select_Default, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, TArray<class UWBP_Buildup_Pal_Item_C*>& K2Node_MakeArray_Array_1, class UWBP_Buildup_Pal_Item_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalMoneyData* CallFunc_GetLocalMoneyData_ReturnValue, class UUserWidget* CallFunc_GetFocusTarget_Widget, int32 CallFunc_Array_Find_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_Max_ReturnValue, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item_4, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_GetItemAndNum_ItemIndex, int32 CallFunc_GetItemAndNum_Num, class FName CallFunc_Array_Get_Item_5, class FText CallFunc_GetItemName_outName, class FName CallFunc_StaticItemID_Money_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class FText CallFunc_GetItemName_outName_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_SelectText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, class UWBP_Buildup_Pal_StatusContent_C* CallFunc_Array_Get_Item_6, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool K2Node_CustomEvent_bResult, class FText CallFunc_GetLocalizedTextFromHandle_Text_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "ExecuteUbergraph_WBP_Buildup_Pal_Status");

	Params::UWBP_Buildup_Pal_Status_C_ExecuteUbergraph_WBP_Buildup_Pal_Status_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CustomEvent_IsUpgrade = K2Node_CustomEvent_IsUpgrade;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Confirmed = K2Node_CustomEvent_Confirmed;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_SelectText_ReturnValue = CallFunc_SelectText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_2 = CallFunc_GetLocalizedTextFromHandle_Text_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalMoneyData_ReturnValue = CallFunc_GetLocalMoneyData_ReturnValue;
	Parms.CallFunc_GetFocusTarget_Widget = CallFunc_GetFocusTarget_Widget;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetItemAndNum_ItemIndex = CallFunc_GetItemAndNum_ItemIndex;
	Parms.CallFunc_GetItemAndNum_Num = CallFunc_GetItemAndNum_Num;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;
	Parms.CallFunc_StaticItemID_Money_ReturnValue = CallFunc_StaticItemID_Money_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetItemName_outName_1 = CallFunc_GetItemName_outName_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_SelectText_ReturnValue_1 = CallFunc_SelectText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_CustomEvent_bResult = K2Node_CustomEvent_bResult;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_3 = CallFunc_GetLocalizedTextFromHandle_Text_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.InvokeReset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Buildup_Pal_Status_C::InvokeReset__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "InvokeReset__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Buildup_Pal_Status.WBP_Buildup_Pal_Status_C.InvokeRankup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalCharacterStatusOperationNameStatus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetRank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Buildup_Pal_Status_C::InvokeRankup__DelegateSignature(enum class EPalCharacterStatusOperationName Status, int32 TargetRank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Buildup_Pal_Status_C", "InvokeRankup__DelegateSignature");

	Params::UWBP_Buildup_Pal_Status_C_InvokeRankup__DelegateSignature_Params Parms{};

	Parms.Status = Status;
	Parms.TargetRank = TargetRank;

	UObject::ProcessEvent(Func, &Parms);

}

}


