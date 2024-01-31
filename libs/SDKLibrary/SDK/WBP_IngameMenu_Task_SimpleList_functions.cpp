#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C
// (None)

class UClass* UWBP_IngameMenu_Task_SimpleList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_Task_SimpleList_C");

	return Clss;
}


// WBP_IngameMenu_Task_SimpleList_C WBP_IngameMenu_Task_SimpleList.Default__WBP_IngameMenu_Task_SimpleList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_Task_SimpleList_C* UWBP_IngameMenu_Task_SimpleList_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_Task_SimpleList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_Task_SimpleList_C*>(UWBP_IngameMenu_Task_SimpleList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.UpdateNickName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewNickName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_IngameMenu_Task_SimpleList_C::UpdateNickName(const class FString& NewNickName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "UpdateNickName");

	Params::UWBP_IngameMenu_Task_SimpleList_C_UpdateNickName_Params Parms{};

	Parms.NewNickName = NewNickName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWorkerComment_outName                                (None)
// TArray<enum class EPalUIConditionType>CallFunc_GetUIDisplayPalCondition_outArray                       (ReferenceParm)

void UWBP_IngameMenu_Task_SimpleList_C::Setup(class UPalIndividualCharacterSlot* TargetSlot, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetWorkerComment_outName, TArray<enum class EPalUIConditionType>& CallFunc_GetUIDisplayPalCondition_outArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "Setup");

	Params::UWBP_IngameMenu_Task_SimpleList_C_Setup_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorkerComment_outName = CallFunc_GetWorkerComment_outName;
	Parms.CallFunc_GetUIDisplayPalCondition_outArray = CallFunc_GetUIDisplayPalCondition_outArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.UpdateCondition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPalUIConditionType>Conditions                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IngameMenu_Task_SimpleList_C::UpdateCondition(TArray<enum class EPalUIConditionType>& Conditions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "UpdateCondition");

	Params::UWBP_IngameMenu_Task_SimpleList_C_UpdateCondition_Params Parms{};

	Parms.Conditions = Conditions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Task_SimpleList_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Task_SimpleList_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_MainMenu_Pal_State_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_IngameMenu_Task_SimpleList_C::ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWBP_MainMenu_Pal_State_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Task_SimpleList_C", "ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList");

	Params::UWBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


