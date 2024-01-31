#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_Monitoring_WorkInfo.WBP_IngameMenu_Monitoring_WorkInfo_C
// (None)

class UClass* UWBP_IngameMenu_Monitoring_WorkInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_Monitoring_WorkInfo_C");

	return Clss;
}


// WBP_IngameMenu_Monitoring_WorkInfo_C WBP_IngameMenu_Monitoring_WorkInfo.Default__WBP_IngameMenu_Monitoring_WorkInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_Monitoring_WorkInfo_C* UWBP_IngameMenu_Monitoring_WorkInfo_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_Monitoring_WorkInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_Monitoring_WorkInfo_C*>(UWBP_IngameMenu_Monitoring_WorkInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_Monitoring_WorkInfo.WBP_IngameMenu_Monitoring_WorkInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Monitoring_WorkInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Monitoring_WorkInfo.WBP_IngameMenu_Monitoring_WorkInfo_C.ChangeLevelText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_WorkInfo_C::ChangeLevelText(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkInfo_C", "ChangeLevelText");

	Params::UWBP_IngameMenu_Monitoring_WorkInfo_C_ChangeLevelText_Params Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring_WorkInfo.WBP_IngameMenu_Monitoring_WorkInfo_C.ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewLevel                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_1                                        (NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)

void UWBP_IngameMenu_Monitoring_WorkInfo_C::ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkInfo(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* K2Node_Select_Default, bool Temp_bool_Variable_1, int32 K2Node_CustomEvent_NewLevel, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UMaterialInterface* K2Node_Select_Default_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_WorkInfo_C", "ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkInfo");

	Params::UWBP_IngameMenu_Monitoring_WorkInfo_C_ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_NewLevel = K2Node_CustomEvent_NewLevel;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


