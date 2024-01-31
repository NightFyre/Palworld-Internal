#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MapPoint_Info_RespawnData.WBP_MapPoint_Info_RespawnData_C
// (None)

class UClass* UWBP_MapPoint_Info_RespawnData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MapPoint_Info_RespawnData_C");

	return Clss;
}


// WBP_MapPoint_Info_RespawnData_C WBP_MapPoint_Info_RespawnData.Default__WBP_MapPoint_Info_RespawnData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MapPoint_Info_RespawnData_C* UWBP_MapPoint_Info_RespawnData_C::GetDefaultObj()
{
	static class UWBP_MapPoint_Info_RespawnData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MapPoint_Info_RespawnData_C*>(UWBP_MapPoint_Info_RespawnData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MapPoint_Info_RespawnData.WBP_MapPoint_Info_RespawnData_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapPoint_Info_RespawnData_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapPoint_Info_RespawnData_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapPoint_Info_RespawnData.WBP_MapPoint_Info_RespawnData_C.SetRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapPoint_Info_RespawnData_C::SetRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapPoint_Info_RespawnData_C", "SetRank");

	Params::UWBP_MapPoint_Info_RespawnData_C_SetRank_Params Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapPoint_Info_RespawnData.WBP_MapPoint_Info_RespawnData_C.ExecuteUbergraph_WBP_MapPoint_Info_RespawnData
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Rank                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_MapPoint_Info_RespawnData_C::ExecuteUbergraph_WBP_MapPoint_Info_RespawnData(int32 EntryPoint, class UTexture2D* Temp_object_Variable, int32 CallFunc_Array_Length_ReturnValue, class UTexture2D* Temp_object_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32 K2Node_CustomEvent_Rank, class FText CallFunc_GetLocalizedTextFromHandle_Text, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Min_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UTexture2D* K2Node_Select_Default, TArray<class UImage*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapPoint_Info_RespawnData_C", "ExecuteUbergraph_WBP_MapPoint_Info_RespawnData");

	Params::UWBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_Rank = K2Node_CustomEvent_Rank;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


