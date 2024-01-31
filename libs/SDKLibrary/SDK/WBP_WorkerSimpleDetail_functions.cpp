#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WorkerSimpleDetail.WBP_WorkerSimpleDetail_C
// (None)

class UClass* UWBP_WorkerSimpleDetail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WorkerSimpleDetail_C");

	return Clss;
}


// WBP_WorkerSimpleDetail_C WBP_WorkerSimpleDetail.Default__WBP_WorkerSimpleDetail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WorkerSimpleDetail_C* UWBP_WorkerSimpleDetail_C::GetDefaultObj()
{
	static class UWBP_WorkerSimpleDetail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WorkerSimpleDetail_C*>(UWBP_WorkerSimpleDetail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WorkerSimpleDetail.WBP_WorkerSimpleDetail_C.CloseSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_WorkerSimpleDetail_C::CloseSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerSimpleDetail_C", "CloseSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorkerSimpleDetail.WBP_WorkerSimpleDetail_C.OpenSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerSimpleDetail_C::OpenSetup(class UPalIndividualCharacterHandle* TargetHandle, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerSimpleDetail_C", "OpenSetup");

	Params::UWBP_WorkerSimpleDetail_C_OpenSetup_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


