#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Crime.WBP_Crime_C
// (None)

class UClass* UWBP_Crime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Crime_C");

	return Clss;
}


// WBP_Crime_C WBP_Crime.Default__WBP_Crime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Crime_C* UWBP_Crime_C::GetDefaultObj()
{
	static class UWBP_Crime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Crime_C*>(UWBP_Crime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Crime.WBP_Crime_C.SetCrime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Crime                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crime_C::SetCrime(bool Crime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crime_C", "SetCrime");

	Params::UWBP_Crime_C_SetCrime_Params Parms{};

	Parms.Crime = Crime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crime.WBP_Crime_C.CrimeBeFound
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CrimeIds                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Crime_C::CrimeBeFound(TArray<class FName>& CrimeIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crime_C", "CrimeBeFound");

	Params::UWBP_Crime_C_CrimeBeFound_Params Parms{};

	Parms.CrimeIds = CrimeIds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crime.WBP_Crime_C.ClearCrimeList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Crime_C::ClearCrimeList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crime_C", "ClearCrimeList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Crime.WBP_Crime_C.ExecuteUbergraph_WBP_Crime
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Crime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_CrimeIds                                      (ConstParm, ReferenceParm)

void UWBP_Crime_C::ExecuteUbergraph_WBP_Crime(int32 EntryPoint, bool K2Node_CustomEvent_Crime, TArray<class FName>& K2Node_CustomEvent_CrimeIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crime_C", "ExecuteUbergraph_WBP_Crime");

	Params::UWBP_Crime_C_ExecuteUbergraph_WBP_Crime_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Crime = K2Node_CustomEvent_Crime;
	Parms.K2Node_CustomEvent_CrimeIds = K2Node_CustomEvent_CrimeIds;

	UObject::ProcessEvent(Func, &Parms);

}

}


