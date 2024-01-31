#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenuConstruction_LR.WBP_IngameMenuConstruction_LR_C
// (None)

class UClass* UWBP_IngameMenuConstruction_LR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenuConstruction_LR_C");

	return Clss;
}


// WBP_IngameMenuConstruction_LR_C WBP_IngameMenuConstruction_LR.Default__WBP_IngameMenuConstruction_LR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenuConstruction_LR_C* UWBP_IngameMenuConstruction_LR_C::GetDefaultObj()
{
	static class UWBP_IngameMenuConstruction_LR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenuConstruction_LR_C*>(UWBP_IngameMenuConstruction_LR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenuConstruction_LR.WBP_IngameMenuConstruction_LR_C.SetInputAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalKeyGuideIcon_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_LR_C::SetInputAction(int32 Index, class FName ActionName, class UWBP_PalKeyGuideIcon_C* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_LR_C", "SetInputAction");

	Params::UWBP_IngameMenuConstruction_LR_C_SetInputAction_Params Parms{};

	Parms.Index = Index;
	Parms.ActionName = ActionName;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenuConstruction_LR.WBP_IngameMenuConstruction_LR_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenuConstruction_LR_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_LR_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenuConstruction_LR.WBP_IngameMenuConstruction_LR_C.ExecuteUbergraph_WBP_IngameMenuConstruction_LR
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalKeyGuideIcon_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_IngameMenuConstruction_LR_C::ExecuteUbergraph_WBP_IngameMenuConstruction_LR(int32 EntryPoint, TArray<class UWBP_PalKeyGuideIcon_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_LR_C", "ExecuteUbergraph_WBP_IngameMenuConstruction_LR");

	Params::UWBP_IngameMenuConstruction_LR_C_ExecuteUbergraph_WBP_IngameMenuConstruction_LR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


