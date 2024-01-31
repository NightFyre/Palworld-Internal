#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCraftInfo.WBP_PalCraftInfo_C
// (None)

class UClass* UWBP_PalCraftInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCraftInfo_C");

	return Clss;
}


// WBP_PalCraftInfo_C WBP_PalCraftInfo.Default__WBP_PalCraftInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCraftInfo_C* UWBP_PalCraftInfo_C::GetDefaultObj()
{
	static class UWBP_PalCraftInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCraftInfo_C*>(UWBP_PalCraftInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetWorkSuitability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWorkSuitability     WorkSuitability                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_C::SetWorkSuitability(enum class EPalWorkSuitability WorkSuitability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "SetWorkSuitability");

	Params::UWBP_PalCraftInfo_C_SetWorkSuitability_Params Parms{};

	Parms.WorkSuitability = WorkSuitability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.UpdateRequireInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalWorkBase*                Work                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalWorkSuitability     WorkSuitability                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_C::UpdateRequireInfo(class UPalWorkBase* Work, enum class EPalWorkSuitability WorkSuitability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "UpdateRequireInfo");

	Params::UWBP_PalCraftInfo_C_UpdateRequireInfo_Params Parms{};

	Parms.Work = Work;
	Parms.WorkSuitability = WorkSuitability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.IsCharacterAssignedFixedToTargetWork
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalCharacterParameterComponent*TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       WorkId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWorkAssign*              WorkAssign                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFixed_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetWorkId_ReturnValue                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWorkAssign*              CallFunc_GetWorkAssign_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PalCraftInfo_C::IsCharacterAssignedFixedToTargetWork(class UPalCharacterParameterComponent* TargetCharacter, const struct FGuid& WorkId, class UPalWorkAssign* WorkAssign, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFixed_ReturnValue, const struct FGuid& CallFunc_GetWorkId_ReturnValue, class UPalWorkAssign* CallFunc_GetWorkAssign_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "IsCharacterAssignedFixedToTargetWork");

	Params::UWBP_PalCraftInfo_C_IsCharacterAssignedFixedToTargetWork_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;
	Parms.WorkId = WorkId;
	Parms.WorkAssign = WorkAssign;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsFixed_ReturnValue = CallFunc_IsFixed_ReturnValue;
	Parms.CallFunc_GetWorkId_ReturnValue = CallFunc_GetWorkId_ReturnValue;
	Parms.CallFunc_GetWorkAssign_ReturnValue = CallFunc_GetWorkAssign_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetInvalidRecipeDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCraftInfo_C::SetInvalidRecipeDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "SetInvalidRecipeDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetProductItemID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_outName                                     (None)

void UWBP_PalCraftInfo_C::SetProductItemID(class FName ItemId, class FText CallFunc_GetItemName_outName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "SetProductItemID");

	Params::UWBP_PalCraftInfo_C_SetProductItemID_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetWorkProgressRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Rate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_C::SetWorkProgressRate(double Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "SetWorkProgressRate");

	Params::UWBP_PalCraftInfo_C_SetWorkProgressRate_Params Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_C::SetIcon(class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "SetIcon");

	Params::UWBP_PalCraftInfo_C_SetIcon_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetInfinityProductMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)

void UWBP_PalCraftInfo_C::SetInfinityProductMode(class FText CallFunc_GetLocalizedText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "SetInfinityProductMode");

	Params::UWBP_PalCraftInfo_C_SetInfinityProductMode_Params Parms{};

	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetProductNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NowProductNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxProductNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_PalCraftInfo_C::SetProductNum(int32 NowProductNum, int32 MaxProductNum, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "SetProductNum");

	Params::UWBP_PalCraftInfo_C_SetProductNum_Params Parms{};

	Parms.NowProductNum = NowProductNum;
	Parms.MaxProductNum = MaxProductNum;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.SetWorkerPalSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterSlot*>Slots                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGuid                       WorkId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCraftInfo_Pal_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCharacterAssignedFixedToTargetWork_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCraftInfo_Pal_C*     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssignedToAnyWork_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_C::SetWorkerPalSlots(TArray<class UPalIndividualCharacterSlot*>& Slots, const struct FGuid& WorkId, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, class UWBP_PalCraftInfo_Pal_C* CallFunc_Array_Get_Item_1, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Min_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsCharacterAssignedFixedToTargetWork_ReturnValue, class UWBP_PalCraftInfo_Pal_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsAssignedToAnyWork_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "SetWorkerPalSlots");

	Params::UWBP_PalCraftInfo_C_SetWorkerPalSlots_Params Parms{};

	Parms.Slots = Slots;
	Parms.WorkId = WorkId;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_IsCharacterAssignedFixedToTargetWork_ReturnValue = CallFunc_IsCharacterAssignedFixedToTargetWork_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_IsAssignedToAnyWork_ReturnValue = CallFunc_IsAssignedToAnyWork_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.AnmEvent_ToDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCraftInfo_C::AnmEvent_ToDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "AnmEvent_ToDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.AnmEvent_ToSimpleDetail
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCraftInfo_C::AnmEvent_ToSimpleDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "AnmEvent_ToSimpleDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.AnmEvent_NoRecipe
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCraftInfo_C::AnmEvent_NoRecipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "AnmEvent_NoRecipe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.AnmEvent_ForceSimple
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCraftInfo_C::AnmEvent_ForceSimple()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "AnmEvent_ForceSimple");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCraftInfo_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCraftInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCraftInfo.WBP_PalCraftInfo_C.ExecuteUbergraph_WBP_PalCraftInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCraftInfo_Pal_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalCraftInfo_Pal_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_PalCraftInfo_C::ExecuteUbergraph_WBP_PalCraftInfo(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UWBP_PalCraftInfo_Pal_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, TArray<class UWBP_PalCraftInfo_Pal_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_C", "ExecuteUbergraph_WBP_PalCraftInfo");

	Params::UWBP_PalCraftInfo_C_ExecuteUbergraph_WBP_PalCraftInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


