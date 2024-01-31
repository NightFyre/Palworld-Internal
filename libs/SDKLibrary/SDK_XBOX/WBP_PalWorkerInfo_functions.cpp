#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalWorkerInfo.WBP_PalWorkerInfo_C
// (None)

class UClass* UWBP_PalWorkerInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalWorkerInfo_C");

	return Clss;
}


// WBP_PalWorkerInfo_C WBP_PalWorkerInfo.Default__WBP_PalWorkerInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalWorkerInfo_C* UWBP_PalWorkerInfo_C::GetDefaultObj()
{
	static class UWBP_PalWorkerInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalWorkerInfo_C*>(UWBP_PalWorkerInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.OnUpdateCondition_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*CallFunc_GetBindedHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPalUIConditionType>CallFunc_GetUIDisplayPalCondition_outArray                       (ReferenceParm)

void UWBP_PalWorkerInfo_C::OnUpdateCondition_Binded(class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, TArray<enum class EPalUIConditionType>& CallFunc_GetUIDisplayPalCondition_outArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "OnUpdateCondition_Binded");

	Params::UWBP_PalWorkerInfo_C_OnUpdateCondition_Binded_Params Parms{};

	Parms.CallFunc_GetBindedHandle_targetHandle = CallFunc_GetBindedHandle_targetHandle;
	Parms.CallFunc_GetUIDisplayPalCondition_outArray = CallFunc_GetUIDisplayPalCondition_outArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.SetPassiveSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                PassiveSkills                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalWorkerInfo_C::SetPassiveSkill(TArray<class FName>& PassiveSkills)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "SetPassiveSkill");

	Params::UWBP_PalWorkerInfo_C_SetPassiveSkill_Params Parms{};

	Parms.PassiveSkills = PassiveSkills;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.Set Work Suitability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EPalWorkSuitability, int32>WorkSuitabilities                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<enum class EPalWorkSuitability>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPalWorkSuitability>CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWorkSuitability     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_WorkIcon_C*CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::Set_Work_Suitability(TMap<enum class EPalWorkSuitability, int32> WorkSuitabilities, TArray<enum class EPalWorkSuitability>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPalWorkSuitability>& CallFunc_Map_Keys_Keys_1, int32 CallFunc_Array_Length_ReturnValue, enum class EPalWorkSuitability CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UWBP_MainMenu_Pal_WorkIcon_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "Set Work Suitability");

	Params::UWBP_PalWorkerInfo_C_Set_Work_Suitability_Params Parms{};

	Parms.WorkSuitabilities = WorkSuitabilities;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.Check Valid Work Suitability
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalWorkSuitability     InWorkSuitability                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWorkSuitability     OutWorkSuitability                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::Check_Valid_Work_Suitability(enum class EPalWorkSuitability InWorkSuitability, bool* IsValid, enum class EPalWorkSuitability* OutWorkSuitability, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "Check Valid Work Suitability");

	Params::UWBP_PalWorkerInfo_C_Check_Valid_Work_Suitability_Params Parms{};

	Parms.InWorkSuitability = InWorkSuitability;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutWorkSuitability != nullptr)
		*OutWorkSuitability = Parms.OutWorkSuitability;

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateHunger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowMaxHunger                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::UpdateHunger(double NowHunger, double NowMaxHunger, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "UpdateHunger");

	Params::UWBP_PalWorkerInfo_C_UpdateHunger_Params Parms{};

	Parms.NowHunger = NowHunger;
	Parms.NowMaxHunger = NowMaxHunger;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_PalWorkerInfo_C::UpdateLevel(int32 NewLevel, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "UpdateLevel");

	Params::UWBP_PalWorkerInfo_C_UpdateLevel_Params Parms{};

	Parms.NewLevel = NewLevel;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateNickName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewNickName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PalWorkerInfo_C::UpdateNickName(const class FString& NewNickName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "UpdateNickName");

	Params::UWBP_PalWorkerInfo_C_UpdateNickName_Params Parms{};

	Parms.NewNickName = NewNickName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateSanity
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowSanity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowMaxSanity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_PalWorkerInfo_C::UpdateSanity(double NowSanity, double NowMaxSanity, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "UpdateSanity");

	Params::UWBP_PalWorkerInfo_C_UpdateSanity_Params Parms{};

	Parms.NowSanity = NowSanity;
	Parms.NowMaxSanity = NowMaxSanity;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue             (NoDestructor)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "UpdateHP");

	Params::UWBP_PalWorkerInfo_C_UpdateHP_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.NowMaxHP = NowMaxHP;
	Parms.CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue = CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.SetWorkerComment
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWorkerComment_outName                                (None)

void UWBP_PalWorkerInfo_C::SetWorkerComment(class UPalIndividualCharacterHandle* TargetHandle, class FText CallFunc_GetWorkerComment_outName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "SetWorkerComment");

	Params::UWBP_PalWorkerInfo_C_SetWorkerComment_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.CallFunc_GetWorkerComment_outName = CallFunc_GetWorkerComment_outName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.SetWorkType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWorkNameFromHandle_outName                           (None)
// bool                               CallFunc_GetWorkNameFromHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::SetWorkType(class UPalIndividualCharacterHandle* TargetHandle, class FText CallFunc_GetWorkNameFromHandle_outName, bool CallFunc_GetWorkNameFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "SetWorkType");

	Params::UWBP_PalWorkerInfo_C_SetWorkType_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.CallFunc_GetWorkNameFromHandle_outName = CallFunc_GetWorkNameFromHandle_outName;
	Parms.CallFunc_GetWorkNameFromHandle_ReturnValue = CallFunc_GetWorkNameFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*IndividualParam                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CharaParam                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::Setup(class UPalIndividualCharacterHandle* TargetHandle, class UPalIndividualCharacterParameter* IndividualParam, class UPalCharacterParameterComponent* CharaParam, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "Setup");

	Params::UWBP_PalWorkerInfo_C_Setup_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.IndividualParam = IndividualParam;
	Parms.CharaParam = CharaParam;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalWorkerInfo_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "AnmEvent_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalWorkerInfo_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "AnmEvent_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalWorkerInfo_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.ExecuteUbergraph_WBP_PalWorkerInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Valid_Work_Suitability_IsValid                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWorkSuitability     CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   K2Node_DynamicCast_AsMaterial                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_MainMenu_Pal_State_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_Skill_Passive_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_WorkIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalWorkerInfo_C::ExecuteUbergraph_WBP_PalWorkerInfo(int32 EntryPoint, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_Check_Valid_Work_Suitability_IsValid, enum class EPalWorkSuitability CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UMaterial* K2Node_DynamicCast_AsMaterial, bool K2Node_DynamicCast_bSuccess, TArray<class UWBP_MainMenu_Pal_State_C*>& K2Node_MakeArray_Array, TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_MakeLiteralInt_ReturnValue, class UWBP_MainMenu_Pal_Skill_Passive_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UWBP_MainMenu_Pal_WorkIcon_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalWorkerInfo_C", "ExecuteUbergraph_WBP_PalWorkerInfo");

	Params::UWBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_Check_Valid_Work_Suitability_IsValid = CallFunc_Check_Valid_Work_Suitability_IsValid;
	Parms.CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability = CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMaterial = K2Node_DynamicCast_AsMaterial;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


