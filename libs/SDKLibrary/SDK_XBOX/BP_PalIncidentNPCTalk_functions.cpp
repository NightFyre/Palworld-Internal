#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C
// (None)

class UClass* UBP_PalIncidentNPCTalk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalIncidentNPCTalk_C");

	return Clss;
}


// BP_PalIncidentNPCTalk_C BP_PalIncidentNPCTalk.Default__BP_PalIncidentNPCTalk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalIncidentNPCTalk_C* UBP_PalIncidentNPCTalk_C::GetDefaultObj()
{
	static class UBP_PalIncidentNPCTalk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalIncidentNPCTalk_C*>(UBP_PalIncidentNPCTalk_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OpenPalShop_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalVenderDataComponent*     VenderDataComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalShopBase*                CallFunc_TryGetPalShop_OutShop                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetPalShop_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalUIDIspatchParameter_PalShop_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OpenPalShop_Internal(class UPalVenderDataComponent* VenderDataComponent, class UPalShopBase* CallFunc_TryGetPalShop_OutShop, bool CallFunc_TryGetPalShop_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_PalUIDIspatchParameter_PalShop_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OpenPalShop_Internal");

	Params::UBP_PalIncidentNPCTalk_C_OpenPalShop_Internal_Params Parms{};

	Parms.VenderDataComponent = VenderDataComponent;
	Parms.CallFunc_TryGetPalShop_OutShop = CallFunc_TryGetPalShop_OutShop;
	Parms.CallFunc_TryGetPalShop_ReturnValue = CallFunc_TryGetPalShop_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnRegisteredPalShopEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalVenderDataComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OnRegisteredPalShopEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, bool CallFunc_IsValid_ReturnValue, class UPalVenderDataComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnRegisteredPalShopEvent");

	Params::UBP_PalIncidentNPCTalk_C_OnRegisteredPalShopEvent_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OpenItemShop_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalVenderDataComponent*     VenderDataComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalShopBase*                CallFunc_TryGetItemShop_OutShop                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetItemShop_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalUIDispatchParameter_ItemShop_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OpenItemShop_Internal(class UPalVenderDataComponent* VenderDataComponent, class UPalShopBase* CallFunc_TryGetItemShop_OutShop, bool CallFunc_TryGetItemShop_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_PalUIDispatchParameter_ItemShop_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OpenItemShop_Internal");

	Params::UBP_PalIncidentNPCTalk_C_OpenItemShop_Internal_Params Parms{};

	Parms.VenderDataComponent = VenderDataComponent;
	Parms.CallFunc_TryGetItemShop_OutShop = CallFunc_TryGetItemShop_OutShop;
	Parms.CallFunc_TryGetItemShop_ReturnValue = CallFunc_TryGetItemShop_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnRegisteredItemShopEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalVenderDataComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OnRegisteredItemShopEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, class UPalVenderDataComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnRegisteredItemShopEvent");

	Params::UBP_PalIncidentNPCTalk_C_OnRegisteredItemShopEvent_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.CunsumeRequestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              RequestNum                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ConsumedItemNum                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RequestItem                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface>Interface                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_outName                                     (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterTalk*K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RequestConsumeInventoryItem_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::CunsumeRequestItem(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, int32 RequestNum, int32 ConsumedItemNum, class FName RequestItem, TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface> Interface, class FText CallFunc_GetItemName_outName, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalIncidentDynamicParameterTalk* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk, bool K2Node_DynamicCast_bSuccess, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, int32 CallFunc_RequestConsumeInventoryItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "CunsumeRequestItem");

	Params::UBP_PalIncidentNPCTalk_C_CunsumeRequestItem_Params Parms{};

	Parms.Param = Param;
	Parms.RequestNum = RequestNum;
	Parms.ConsumedItemNum = ConsumedItemNum;
	Parms.RequestItem = RequestItem;
	Parms.Interface = Interface;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk = K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_RequestConsumeInventoryItem_ReturnValue = CallFunc_RequestConsumeInventoryItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.Lottery Index by Weights
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                     Weights                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LotteryWeight                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TotalWeight                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::Lottery_Index_by_Weights(TArray<double>& Weights, int32* Index, int32 SelectedIndex, double LotteryWeight, double TotalWeight, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, double CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "Lottery Index by Weights");

	Params::UBP_PalIncidentNPCTalk_C_Lottery_Index_by_Weights_Params Parms{};

	Parms.Weights = Weights;
	Parms.SelectedIndex = SelectedIndex;
	Parms.LotteryWeight = LotteryWeight;
	Parms.TotalWeight = TotalWeight;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.LotteryItemAndNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FName                        AddItemName1                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AddItemNum1                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Weights                                                          (Edit, BlueprintVisible)
// TArray<class FName>                RowNames                                                         (Edit, BlueprintVisible)
// class UDataTable*                  FuncParameter                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              AddItemNum                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AddItemName                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxRange                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Unit                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumMax                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumMin                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinRange                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPalPresentLotteryDataTableRowCallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// struct FFPalPresentLotteryDataTableRowCallFunc_GetDataTableRowFromName_OutRow_1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::LotteryItemAndNum(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, class FName* AddItemName1, int32* AddItemNum1, int32 SelectedIndex, const TArray<double>& Weights, const TArray<class FName>& RowNames, class UDataTable* FuncParameter, int32 AddItemNum, class FName AddItemName, int32 MaxRange, int32 Unit, int32 NumMax, int32 NumMin, int32 MinRange, int32 Temp_int_Array_Index_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FFPalPresentLotteryDataTableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Max_ReturnValue_1, int32 CallFunc_Max_ReturnValue_2, class FName CallFunc_Array_Get_Item, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, const struct FFPalPresentLotteryDataTableRow& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "LotteryItemAndNum");

	Params::UBP_PalIncidentNPCTalk_C_LotteryItemAndNum_Params Parms{};

	Parms.Param = Param;
	Parms.SelectedIndex = SelectedIndex;
	Parms.Weights = Weights;
	Parms.RowNames = RowNames;
	Parms.FuncParameter = FuncParameter;
	Parms.AddItemNum = AddItemNum;
	Parms.AddItemName = AddItemName;
	Parms.MaxRange = MaxRange;
	Parms.Unit = Unit;
	Parms.NumMax = NumMax;
	Parms.NumMin = NumMin;
	Parms.MinRange = MinRange;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue_2 = CallFunc_Max_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AddItemName1 != nullptr)
		*AddItemName1 = Parms.AddItemName1;

	if (AddItemNum1 != nullptr)
		*AddItemNum1 = Parms.AddItemNum1;

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.HasRequestItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FName                        RequestItem                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface>Interface                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterTalk*K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::HasRequestItem(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, class FName RequestItem, TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface> Interface, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UPalIncidentDynamicParameterTalk* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_IsExistItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "HasRequestItem");

	Params::UBP_PalIncidentNPCTalk_C_HasRequestItem_Params Parms{};

	Parms.Param = Param;
	Parms.RequestItem = RequestItem;
	Parms.Interface = Interface;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk = K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_IsExistItem_ReturnValue = CallFunc_IsExistItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.RequestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Weights                                                          (Edit, BlueprintVisible)
// class UDataTable*                  DataTable                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                RowNames                                                         (Edit, BlueprintVisible)
// TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface>Interface                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterTalk*K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPalRequestItemLotteryDataTableRowCallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_GetItemName_outName                                     (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Lottery_Index_by_Weights_Index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPalRequestItemLotteryDataTableRowCallFunc_GetDataTableRowFromName_OutRow_1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterTalk*K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk_1       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::RequestItem(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, int32 SelectedIndex, const TArray<double>& Weights, class UDataTable* DataTable, const TArray<class FName>& RowNames, TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface> Interface, int32 Temp_int_Array_Index_Variable, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalIncidentDynamicParameterTalk* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FFPalRequestItemLotteryDataTableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_GetItemName_outName, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Lottery_Index_by_Weights_Index, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FFPalRequestItemLotteryDataTableRow& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalIncidentDynamicParameterTalk* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "RequestItem");

	Params::UBP_PalIncidentNPCTalk_C_RequestItem_Params Parms{};

	Parms.Param = Param;
	Parms.SelectedIndex = SelectedIndex;
	Parms.Weights = Weights;
	Parms.DataTable = DataTable;
	Parms.RowNames = RowNames;
	Parms.Interface = Interface;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk = K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Lottery_Index_by_Weights_Index = CallFunc_Lottery_Index_by_Weights_Index;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetDynamicParameter_ReturnValue_1 = CallFunc_GetDynamicParameter_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk_1 = K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.AddItemToInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface>Interface                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_LotteryItemAndNum_AddItemName1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LotteryItemAndNum_AddItemNum1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::AddItemToInventory(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface> Interface, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class FName CallFunc_LotteryItemAndNum_AddItemName1, int32 CallFunc_LotteryItemAndNum_AddItemNum1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "AddItemToInventory");

	Params::UBP_PalIncidentNPCTalk_C_AddItemToInventory_Params Parms{};

	Parms.Param = Param;
	Parms.Interface = Interface;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_LotteryItemAndNum_AddItemName1 = CallFunc_LotteryItemAndNum_AddItemName1;
	Parms.CallFunc_LotteryItemAndNum_AddItemNum1 = CallFunc_LotteryItemAndNum_AddItemNum1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.SpawnItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Weights                                                          (Edit, BlueprintVisible)
// TArray<class FName>                RowNames                                                         (Edit, BlueprintVisible)
// class UDataTable*                  FuncParameter                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              AddItemNum                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AddItemName                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxRange                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Unit                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumMax                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumMin                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinRange                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_LotteryItemAndNum_AddItemName1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LotteryItemAndNum_AddItemNum1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::SpawnItem(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, int32 SelectedIndex, const TArray<double>& Weights, const TArray<class FName>& RowNames, class UDataTable* FuncParameter, int32 AddItemNum, class FName AddItemName, int32 MaxRange, int32 Unit, int32 NumMax, int32 NumMin, int32 MinRange, class FName CallFunc_LotteryItemAndNum_AddItemName1, int32 CallFunc_LotteryItemAndNum_AddItemNum1, bool CallFunc_Greater_IntInt_ReturnValue, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "SpawnItem");

	Params::UBP_PalIncidentNPCTalk_C_SpawnItem_Params Parms{};

	Parms.Param = Param;
	Parms.SelectedIndex = SelectedIndex;
	Parms.Weights = Weights;
	Parms.RowNames = RowNames;
	Parms.FuncParameter = FuncParameter;
	Parms.AddItemNum = AddItemNum;
	Parms.AddItemName = AddItemName;
	Parms.MaxRange = MaxRange;
	Parms.Unit = Unit;
	Parms.NumMax = NumMax;
	Parms.NumMin = NumMin;
	Parms.MinRange = MinRange;
	Parms.CallFunc_LotteryItemAndNum_AddItemName1 = CallFunc_LotteryItemAndNum_AddItemName1;
	Parms.CallFunc_LotteryItemAndNum_AddItemNum1 = CallFunc_LotteryItemAndNum_AddItemNum1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.ReturnToSpawnedPointSquad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSquad*                   CallFunc_GetSquad_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalInstanceID>      CallFunc_GetMemberID_OutList                                     (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandleReference*CallFunc_GetIndividualHandleReference_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_Visitor_C*K2Node_DynamicCast_AsBP_NPCAIController_Visitor                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::ReturnToSpawnedPointSquad(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalSquad* CallFunc_GetSquad_ReturnValue, TArray<struct FPalInstanceID>& CallFunc_GetMemberID_OutList, int32 CallFunc_Array_Length_ReturnValue, const struct FPalInstanceID& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UPalIndividualCharacterHandleReference* CallFunc_GetIndividualHandleReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1, class ABP_NPCAIController_Visitor_C* K2Node_DynamicCast_AsBP_NPCAIController_Visitor, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "ReturnToSpawnedPointSquad");

	Params::UBP_PalIncidentNPCTalk_C_ReturnToSpawnedPointSquad_Params Parms{};

	Parms.Param = Param;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSquad_ReturnValue = CallFunc_GetSquad_ReturnValue;
	Parms.CallFunc_GetMemberID_OutList = CallFunc_GetMemberID_OutList;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetIndividualHandleReference_ReturnValue = CallFunc_GetIndividualHandleReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController_Visitor = K2Node_DynamicCast_AsBP_NPCAIController_Visitor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.ReturnToSpawnedPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_Visitor_C*K2Node_DynamicCast_AsBP_NPCAIController_Visitor                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::ReturnToSpawnedPoint(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_Visitor_C* K2Node_DynamicCast_AsBP_NPCAIController_Visitor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "ReturnToSpawnedPoint");

	Params::UBP_PalIncidentNPCTalk_C_ReturnToSpawnedPoint_Params Parms{};

	Parms.Param = Param;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController_Visitor = K2Node_DynamicCast_AsBP_NPCAIController_Visitor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.AttackToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterTalk*K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::AttackToPlayer(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalIncidentDynamicParameterTalk* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "AttackToPlayer");

	Params::UBP_PalIncidentNPCTalk_C_AttackToPlayer_Params Parms{};

	Parms.Param = Param;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk = K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController = K2Node_DynamicCast_AsBP_NPCAIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OpenPalShop_Sell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalHUDDispatchParameter_PalShop*TempWidgetParam                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     WidgetParam                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalVenderDataComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidPalShop_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OpenPalShop_Sell(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, class UPalHUDDispatchParameter_PalShop* TempWidgetParam, class UObject* WidgetParam, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, class UPalVenderDataComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidPalShop_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OpenPalShop_Sell");

	Params::UBP_PalIncidentNPCTalk_C_OpenPalShop_Sell_Params Parms{};

	Parms.Param = Param;
	Parms.TempWidgetParam = TempWidgetParam;
	Parms.WidgetParam = WidgetParam;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidPalShop_ReturnValue = CallFunc_IsValidPalShop_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.Terminate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInitialized_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::Terminate(bool CallFunc_IsInitialized_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "Terminate");

	Params::UBP_PalIncidentNPCTalk_C_Terminate_Params Parms{};

	Parms.CallFunc_IsInitialized_ReturnValue = CallFunc_IsInitialized_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.SetDisableMovementForTarget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DisableFlagName                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               TargetCharacter                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::SetDisableMovementForTarget(bool IsDisable, class FName DisableFlagName, class APalCharacter* TargetCharacter, class AController* CallFunc_GetController_ReturnValue, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "SetDisableMovementForTarget");

	Params::UBP_PalIncidentNPCTalk_C_SetDisableMovementForTarget_Params Parms{};

	Parms.IsDisable = IsDisable;
	Parms.DisableFlagName = DisableFlagName;
	Parms.TargetCharacter = TargetCharacter;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.FindTalkCameraLocation_NoHitPlayer
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PlayerLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TalkCameraLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NewTalkCameraLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ResultLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bResult                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TraceDegStep                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::FindTalkCameraLocation_NoHitPlayer(const struct FVector& PlayerLocation, const struct FVector& TargetLocation, const struct FVector& TalkCameraLocation, bool* Result, struct FVector* NewTalkCameraLocation, const struct FVector& ResultLocation, bool bResult, int32 TraceDegStep, bool Temp_bool_Variable, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "FindTalkCameraLocation_NoHitPlayer");

	Params::UBP_PalIncidentNPCTalk_C_FindTalkCameraLocation_NoHitPlayer_Params Parms{};

	Parms.PlayerLocation = PlayerLocation;
	Parms.TargetLocation = TargetLocation;
	Parms.TalkCameraLocation = TalkCameraLocation;
	Parms.ResultLocation = ResultLocation;
	Parms.bResult = bResult;
	Parms.TraceDegStep = TraceDegStep;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_2 = CallFunc_Subtract_VectorVector_ReturnValue_2;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_RotateAngleAxis_ReturnValue_1 = CallFunc_RotateAngleAxis_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (NewTalkCameraLocation != nullptr)
		*NewTalkCameraLocation = std::move(Parms.NewTalkCameraLocation);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.DetachCamera
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetViewTargetWithBlend_BlendTime_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::DetachCamera(double BlendTime, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_SetViewTargetWithBlend_BlendTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "DetachCamera");

	Params::UBP_PalIncidentNPCTalk_C_DetachCamera_Params Parms{};

	Parms.BlendTime = BlendTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetViewTargetWithBlend_BlendTime_ImplicitCast = CallFunc_SetViewTargetWithBlend_BlendTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.AttachCamera
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TraceDegStep                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    RotationToTarget                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TalkCameraLocation                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PlayerCameraLocation                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PlayerLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindTalkCameraLocation_NoHitPlayer_Result               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindTalkCameraLocation_NoHitPlayer_NewTalkCameraLocation(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPalCharacterCameraComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::AttachCamera(bool NewLocalVar_0, int32 TraceDegStep, const struct FRotator& RotationToTarget, const struct FVector& TalkCameraLocation, const struct FVector& PlayerCameraLocation, const struct FVector& PlayerLocation, const struct FVector& TargetLocation, bool CallFunc_FindTalkCameraLocation_NoHitPlayer_Result, const struct FVector& CallFunc_FindTalkCameraLocation_NoHitPlayer_NewTalkCameraLocation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UPalCharacterCameraComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetViewTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "AttachCamera");

	Params::UBP_PalIncidentNPCTalk_C_AttachCamera_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.TraceDegStep = TraceDegStep;
	Parms.RotationToTarget = RotationToTarget;
	Parms.TalkCameraLocation = TalkCameraLocation;
	Parms.PlayerCameraLocation = PlayerCameraLocation;
	Parms.PlayerLocation = PlayerLocation;
	Parms.TargetLocation = TargetLocation;
	Parms.CallFunc_FindTalkCameraLocation_NoHitPlayer_Result = CallFunc_FindTalkCameraLocation_NoHitPlayer_Result;
	Parms.CallFunc_FindTalkCameraLocation_NoHitPlayer_NewTalkCameraLocation = CallFunc_FindTalkCameraLocation_NoHitPlayer_NewTalkCameraLocation;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.CreateCamera
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PalIncidentCamera_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::CreateCamera(class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PalIncidentCamera_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "CreateCamera");

	Params::UBP_PalIncidentNPCTalk_C_CreateCamera_Params Parms{};

	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.GetTalkCharacter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*               TalkCharacter                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOccuredObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::GetTalkCharacter(class APalCharacter** TalkCharacter, class UObject* CallFunc_GetOccuredObject_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "GetTalkCharacter");

	Params::UBP_PalIncidentNPCTalk_C_GetTalkCharacter_Params Parms{};

	Parms.CallFunc_GetOccuredObject_ReturnValue = CallFunc_GetOccuredObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TalkCharacter != nullptr)
		*TalkCharacter = Parms.TalkCharacter;

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OpenPalShop_Buy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalHUDDispatchParameter_PalShop*TempWidgetParam                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     WidgetParam                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalVenderDataComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidPalShop_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OpenPalShop_Buy(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, class UPalHUDDispatchParameter_PalShop* TempWidgetParam, class UObject* WidgetParam, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, class UPalVenderDataComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidPalShop_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OpenPalShop_Buy");

	Params::UBP_PalIncidentNPCTalk_C_OpenPalShop_Buy_Params Parms{};

	Parms.Param = Param;
	Parms.TempWidgetParam = TempWidgetParam;
	Parms.WidgetParam = WidgetParam;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidPalShop_ReturnValue = CallFunc_IsValidPalShop_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OpenItemShop_Sell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalHUDDispatchParameterBase*TempWidgetParam                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalVenderDataComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidItemShop_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OpenItemShop_Sell(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, class UPalHUDDispatchParameterBase* TempWidgetParam, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, class UPalVenderDataComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValidItemShop_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OpenItemShop_Sell");

	Params::UBP_PalIncidentNPCTalk_C_OpenItemShop_Sell_Params Parms{};

	Parms.Param = Param;
	Parms.TempWidgetParam = TempWidgetParam;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValidItemShop_ReturnValue = CallFunc_IsValidItemShop_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OpenItemShop_Buy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalHUDDispatchParameterBase*TempWidgetParam                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalVenderDataComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidItemShop_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OpenItemShop_Buy(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, class UPalHUDDispatchParameterBase* TempWidgetParam, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, class UPalVenderDataComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValidItemShop_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OpenItemShop_Buy");

	Params::UBP_PalIncidentNPCTalk_C_OpenItemShop_Buy_Params Parms{};

	Parms.Param = Param;
	Parms.TempWidgetParam = TempWidgetParam;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValidItemShop_ReturnValue = CallFunc_IsValidItemShop_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.CustomFunctionTemplate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalNPCTalkSystemCustomFunctionParametersParam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface>Interface                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::CustomFunctionTemplate(const struct FPalNPCTalkSystemCustomFunctionParameters& Param, TScriptInterface<class IPalNPCTalkSystemCustomFunctionInterface> Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "CustomFunctionTemplate");

	Params::UBP_PalIncidentNPCTalk_C_CustomFunctionTemplate_Params Parms{};

	Parms.Param = Param;
	Parms.Interface = Interface;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.GetMultiTalk
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TalkId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasTalkData                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  TalkData                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      TalkSequence                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_MultiTalk_OrderByName_C* K2Node_DynamicCast_AsBP_Multi_Talk_Order_by_Name                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStartTalkSequence_Sequence                           (ZeroConstructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetTalkData_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCManager*              CallFunc_GetNPCManager_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UPalNPCMultiTalkHandle>CallFunc_GetNPCMultiTalkClassFromTalkId_ReturnValue              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNPCMultiTalkHandle*      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::GetMultiTalk(class FName TalkId, bool* HasTalkData, class UDataTable** TalkData, class FString* TalkSequence, class UBP_MultiTalk_OrderByName_C* K2Node_DynamicCast_AsBP_Multi_Talk_Order_by_Name, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetStartTalkSequence_Sequence, class UDataTable* CallFunc_GetTalkData_ReturnValue, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, TSubclassOf<class UPalNPCMultiTalkHandle> CallFunc_GetNPCMultiTalkClassFromTalkId_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UPalNPCMultiTalkHandle* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "GetMultiTalk");

	Params::UBP_PalIncidentNPCTalk_C_GetMultiTalk_Params Parms{};

	Parms.TalkId = TalkId;
	Parms.K2Node_DynamicCast_AsBP_Multi_Talk_Order_by_Name = K2Node_DynamicCast_AsBP_Multi_Talk_Order_by_Name;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStartTalkSequence_Sequence = CallFunc_GetStartTalkSequence_Sequence;
	Parms.CallFunc_GetTalkData_ReturnValue = CallFunc_GetTalkData_ReturnValue;
	Parms.CallFunc_GetNPCManager_ReturnValue = CallFunc_GetNPCManager_ReturnValue;
	Parms.CallFunc_GetNPCMultiTalkClassFromTalkId_ReturnValue = CallFunc_GetNPCMultiTalkClassFromTalkId_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasTalkData != nullptr)
		*HasTalkData = Parms.HasTalkData;

	if (TalkData != nullptr)
		*TalkData = Parms.TalkData;

	if (TalkSequence != nullptr)
		*TalkSequence = std::move(Parms.TalkSequence);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.GetCharacterTalk
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasTalkData                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  TalkData                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCManager*              CallFunc_GetNPCManager_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetNPCCharacterTalkDT_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::GetCharacterTalk(class FName CharacterID, bool* HasTalkData, class UDataTable** TalkData, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, class UDataTable* CallFunc_GetNPCCharacterTalkDT_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "GetCharacterTalk");

	Params::UBP_PalIncidentNPCTalk_C_GetCharacterTalk_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.CallFunc_GetNPCManager_ReturnValue = CallFunc_GetNPCManager_ReturnValue;
	Parms.CallFunc_GetNPCCharacterTalkDT_ReturnValue = CallFunc_GetNPCCharacterTalkDT_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasTalkData != nullptr)
		*HasTalkData = Parms.HasTalkData;

	if (TalkData != nullptr)
		*TalkData = Parms.TalkData;

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.GetOneTalk
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TalkId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasTalkData                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  OneTalkData                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCManager*              CallFunc_GetNPCManager_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetNPCOneTalkDTFromTalkId_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::GetOneTalk(class FName TalkId, bool* HasTalkData, class UDataTable** OneTalkData, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, class UDataTable* CallFunc_GetNPCOneTalkDTFromTalkId_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "GetOneTalk");

	Params::UBP_PalIncidentNPCTalk_C_GetOneTalk_Params Parms{};

	Parms.TalkId = TalkId;
	Parms.CallFunc_GetNPCManager_ReturnValue = CallFunc_GetNPCManager_ReturnValue;
	Parms.CallFunc_GetNPCOneTalkDTFromTalkId_ReturnValue = CallFunc_GetNPCOneTalkDTFromTalkId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasTalkData != nullptr)
		*HasTalkData = Parms.HasTalkData;

	if (OneTalkData != nullptr)
		*OneTalkData = Parms.OneTalkData;

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.GetTalkId
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TalkId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterTalk*K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::GetTalkId(class FName* TalkId, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalIncidentDynamicParameterTalk* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "GetTalkId");

	Params::UBP_PalIncidentNPCTalk_C_GetTalkId_Params Parms{};

	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk = K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TalkId != nullptr)
		*TalkId = Parms.TalkId;

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.GetTalkType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalIncidentTalkType    TalkType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterTalk*K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::GetTalkType(enum class EPalIncidentTalkType* TalkType, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalIncidentDynamicParameterTalk* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "GetTalkType");

	Params::UBP_PalIncidentNPCTalk_C_GetTalkType_Params Parms{};

	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk = K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TalkType != nullptr)
		*TalkType = Parms.TalkType;

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.Tick_DelayFinish
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCInteractionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalNetworkTransmitter*      CallFunc_GetNetworkTransmitter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNetworkCharacterComponent*CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::Tick_DelayFinish(double DeltaTime, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalNPCInteractionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter_1, class APalNetworkTransmitter* CallFunc_GetNetworkTransmitter_ReturnValue, class UPalNetworkCharacterComponent* CallFunc_GetCharacter_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "Tick_DelayFinish");

	Params::UBP_PalIncidentNPCTalk_C_Tick_DelayFinish_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Character = K2Node_DynamicCast_AsPal_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter_1 = CallFunc_GetTalkCharacter_TalkCharacter_1;
	Parms.CallFunc_GetNetworkTransmitter_ReturnValue = CallFunc_GetNetworkTransmitter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.Tick_Talking
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::Tick_Talking(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "Tick_Talking");

	Params::UBP_PalIncidentNPCTalk_C_Tick_Talking_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.Setup
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Talkable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               Character                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameterTalk*K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCharacterTalk_HasTalkData                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetCharacterTalk_TalkData                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMultiTalk_HasTalkData                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetMultiTalk_TalkData                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetMultiTalk_TalkSequence                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOneTalk_HasTalkData                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetOneTalk_OneTalkData                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::Setup(bool* Talkable, class APalCharacter* Character, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalIncidentDynamicParameterTalk* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetCharacterTalk_HasTalkData, class UDataTable* CallFunc_GetCharacterTalk_TalkData, bool CallFunc_GetMultiTalk_HasTalkData, class UDataTable* CallFunc_GetMultiTalk_TalkData, const class FString& CallFunc_GetMultiTalk_TalkSequence, bool CallFunc_GetOneTalk_HasTalkData, class UDataTable* CallFunc_GetOneTalk_OneTalkData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "Setup");

	Params::UBP_PalIncidentNPCTalk_C_Setup_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk = K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Talk;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCharacterTalk_HasTalkData = CallFunc_GetCharacterTalk_HasTalkData;
	Parms.CallFunc_GetCharacterTalk_TalkData = CallFunc_GetCharacterTalk_TalkData;
	Parms.CallFunc_GetMultiTalk_HasTalkData = CallFunc_GetMultiTalk_HasTalkData;
	Parms.CallFunc_GetMultiTalk_TalkData = CallFunc_GetMultiTalk_TalkData;
	Parms.CallFunc_GetMultiTalk_TalkSequence = CallFunc_GetMultiTalk_TalkSequence;
	Parms.CallFunc_GetOneTalk_HasTalkData = CallFunc_GetOneTalk_HasTalkData;
	Parms.CallFunc_GetOneTalk_OneTalkData = CallFunc_GetOneTalk_OneTalkData;

	UObject::ProcessEvent(Func, &Parms);

	if (Talkable != nullptr)
		*Talkable = Parms.Talkable;

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnLoaded_C353222C4BEC5555051A4EADFED69384
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OnLoaded_C353222C4BEC5555051A4EADFED69384(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnLoaded_C353222C4BEC5555051A4EADFED69384");

	Params::UBP_PalIncidentNPCTalk_C_OnLoaded_C353222C4BEC5555051A4EADFED69384_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnLoaded_4657C8C34673DDF607731EB504BB6BC2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OnLoaded_4657C8C34673DDF607731EB504BB6BC2(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnLoaded_4657C8C34673DDF607731EB504BB6BC2");

	Params::UBP_PalIncidentNPCTalk_C_OnLoaded_4657C8C34673DDF607731EB504BB6BC2_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnLoaded_F24E709545997EF6D7A638BDDC970200
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OnLoaded_F24E709545997EF6D7A638BDDC970200(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnLoaded_F24E709545997EF6D7A638BDDC970200");

	Params::UBP_PalIncidentNPCTalk_C_OnLoaded_F24E709545997EF6D7A638BDDC970200_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnItemShopClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OnItemShopClosed(class UPalHUDDispatchParameterBase* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnItemShopClosed");

	Params::UBP_PalIncidentNPCTalk_C_OnItemShopClosed_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.StartTalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalIncidentNPCTalk_C::StartTalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "StartTalk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OpenItemShop_AsyncLoadAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*HUDParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OpenItemShop_AsyncLoadAsset(class UPalHUDDispatchParameterBase* HUDParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OpenItemShop_AsyncLoadAsset");

	Params::UBP_PalIncidentNPCTalk_C_OpenItemShop_AsyncLoadAsset_Params Parms{};

	Parms.HUDParam = HUDParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnTalkUIClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OnTalkUIClosed(class UPalHUDDispatchParameterBase* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnTalkUIClosed");

	Params::UBP_PalIncidentNPCTalk_C_OnTalkUIClosed_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PalIncidentNPCTalk_C::OnBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnBegin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::Tick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "Tick");

	Params::UBP_PalIncidentNPCTalk_C_Tick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PalIncidentNPCTalk_C::OnEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnGenerated
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PalIncidentNPCTalk_C::OnGenerated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnGenerated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnInitialized
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PalIncidentNPCTalk_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnForceStop
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PalIncidentNPCTalk_C::OnForceStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnForceStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnCanceled
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PalIncidentNPCTalk_C::OnCanceled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnCanceled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OpenPalShop_AsyncLoadAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*HUDParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OpenPalShop_AsyncLoadAsset(class UPalHUDDispatchParameterBase* HUDParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OpenPalShop_AsyncLoadAsset");

	Params::UBP_PalIncidentNPCTalk_C_OpenPalShop_AsyncLoadAsset_Params Parms{};

	Parms.HUDParam = HUDParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.OnShopUIClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::OnShopUIClosed(class UPalHUDDispatchParameterBase* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "OnShopUIClosed");

	Params::UBP_PalIncidentNPCTalk_C_OnShopUIClosed_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentNPCTalk.BP_PalIncidentNPCTalk_C.ExecuteUbergraph_BP_PalIncidentNPCTalk
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI_1         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*K2Node_CustomEvent_Param_2                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTalkWidgetParameter*     CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*K2Node_CustomEvent_HUDParam_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*K2Node_CustomEvent_Param_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTalkWidgetParameter*     K2Node_DynamicCast_AsPal_Talk_Widget_Parameter                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Setup_Talkable                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTalkCharacter_TalkCharacter_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*K2Node_CustomEvent_HUDParam                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*K2Node_CustomEvent_Param                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_2                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI_2         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded_2                                      (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalNetworkTransmitter*      CallFunc_GetNetworkTransmitter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNetworkCharacterComponent*CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Tick_DelayFinish_DeltaTime_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentNPCTalk_C::ExecuteUbergraph_BP_PalIncidentNPCTalk(int32 EntryPoint, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded_1, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable_1, class UClass* K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI_1, bool K2Node_ClassDynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_Param_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalTalkWidgetParameter* CallFunc_SpawnObject_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_HUDParam_1, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_Param_1, class UPalTalkWidgetParameter* K2Node_DynamicCast_AsPal_Talk_Widget_Parameter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Setup_Talkable, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetTalkCharacter_TalkCharacter_1, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_HUDParam, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_2, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_Param, class UClass* Temp_class_Variable_2, class UClass* K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI_2, bool K2Node_ClassDynamicCast_bSuccess_2, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue_2, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APalNetworkTransmitter* CallFunc_GetNetworkTransmitter_ReturnValue, class UPalNetworkCharacterComponent* CallFunc_GetCharacter_ReturnValue, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue_1, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue, double CallFunc_Tick_DelayFinish_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentNPCTalk_C", "ExecuteUbergraph_BP_PalIncidentNPCTalk");

	Params::UBP_PalIncidentNPCTalk_C_ExecuteUbergraph_BP_PalIncidentNPCTalk_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter = CallFunc_GetTalkCharacter_TalkCharacter;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI = K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI_1 = K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.K2Node_CustomEvent_Param_2 = K2Node_CustomEvent_Param_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_HUDParam_1 = K2Node_CustomEvent_HUDParam_1;
	Parms.K2Node_CustomEvent_Param_1 = K2Node_CustomEvent_Param_1;
	Parms.K2Node_DynamicCast_AsPal_Talk_Widget_Parameter = K2Node_DynamicCast_AsPal_Talk_Widget_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Setup_Talkable = CallFunc_Setup_Talkable;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetTalkCharacter_TalkCharacter_1 = CallFunc_GetTalkCharacter_TalkCharacter_1;
	Parms.K2Node_CustomEvent_HUDParam = K2Node_CustomEvent_HUDParam;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetHUDService_ReturnValue_2 = CallFunc_GetHUDService_ReturnValue_2;
	Parms.K2Node_CustomEvent_Param = K2Node_CustomEvent_Param;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI_2 = K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Push_ReturnValue_1 = CallFunc_Push_ReturnValue_1;
	Parms.CallFunc_Push_ReturnValue_2 = CallFunc_Push_ReturnValue_2;
	Parms.K2Node_CustomEvent_Loaded_2 = K2Node_CustomEvent_Loaded_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetNetworkTransmitter_ReturnValue = CallFunc_GetNetworkTransmitter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.CallFunc_GetDynamicParameter_ReturnValue_1 = CallFunc_GetDynamicParameter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Player_Character = K2Node_DynamicCast_AsPal_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Tick_DelayFinish_DeltaTime_ImplicitCast = CallFunc_Tick_DelayFinish_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


