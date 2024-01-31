#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C
// (None)

class UClass* UWBP_PlayerInventoryWeightInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerInventoryWeightInfo_C");

	return Clss;
}


// WBP_PlayerInventoryWeightInfo_C WBP_PlayerInventoryWeightInfo.Default__WBP_PlayerInventoryWeightInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerInventoryWeightInfo_C* UWBP_PlayerInventoryWeightInfo_C::GetDefaultObj()
{
	static class UWBP_PlayerInventoryWeightInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerInventoryWeightInfo_C*>(UWBP_PlayerInventoryWeightInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateMaxWeightBuff
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::OnUpdateMaxWeightBuff(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UMaterialInterface* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "OnUpdateMaxWeightBuff");

	Params::UWBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeightBuff_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.UpdateWeight_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowWeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxWeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceSkipAnim                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_CachedInventoryWeightRate_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::UpdateWeight_Internal(double NowWeight, double MaxWeight, bool ForceSkipAnim, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_CachedInventoryWeightRate_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "UpdateWeight_Internal");

	Params::UWBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal_Params Parms{};

	Parms.NowWeight = NowWeight;
	Parms.MaxWeight = MaxWeight;
	Parms.ForceSkipAnim = ForceSkipAnim;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_CachedInventoryWeightRate_ImplicitCast = K2Node_VariableSet_CachedInventoryWeightRate_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateMaxWeight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MaxWeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::OnUpdateMaxWeight(float MaxWeight, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, double CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast, double CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "OnUpdateMaxWeight");

	Params::UWBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight_Params Parms{};

	Parms.MaxWeight = MaxWeight;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast = CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast;
	Parms.CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast = CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateWeight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NowWeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::OnUpdateWeight(float NowWeight, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, double CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast, double CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "OnUpdateWeight");

	Params::UWBP_PlayerInventoryWeightInfo_C_OnUpdateWeight_Params Parms{};

	Parms.NowWeight = NowWeight;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast = CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast;
	Parms.CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast = CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.AnmEvent_ForceNormal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerInventoryWeightInfo_C::AnmEvent_ForceNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "AnmEvent_ForceNormal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.AnmEvent_ForceFull
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerInventoryWeightInfo_C::AnmEvent_ForceFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "AnmEvent_ForceFull");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.AnmEvent_FullToNormal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerInventoryWeightInfo_C::AnmEvent_FullToNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "AnmEvent_FullToNormal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.AnmEvent_NormalToFull
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerInventoryWeightInfo_C::AnmEvent_NormalToFull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "AnmEvent_NormalToFull");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerInventoryWeightInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerInventoryWeightInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.ExecuteUbergraph_WBP_PlayerInventoryWeightInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNowItemWeight_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::ExecuteUbergraph_WBP_PlayerInventoryWeightInfo(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, float CallFunc_GetNowItemWeight_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast, double CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "ExecuteUbergraph_WBP_PlayerInventoryWeightInfo");

	Params::UWBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_GetNowItemWeight_ReturnValue = CallFunc_GetNowItemWeight_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast = CallFunc_UpdateWeight_Internal_NowWeight_ImplicitCast;
	Parms.CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast = CallFunc_UpdateWeight_Internal_MaxWeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


