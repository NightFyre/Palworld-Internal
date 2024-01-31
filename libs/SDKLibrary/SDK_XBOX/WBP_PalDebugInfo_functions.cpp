#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalDebugInfo.WBP_PalDebugInfo_C
// (None)

class UClass* UWBP_PalDebugInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalDebugInfo_C");

	return Clss;
}


// WBP_PalDebugInfo_C WBP_PalDebugInfo.Default__WBP_PalDebugInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalDebugInfo_C* UWBP_PalDebugInfo_C::GetDefaultObj()
{
	static class UWBP_PalDebugInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalDebugInfo_C*>(UWBP_PalDebugInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalDebugInfo.WBP_PalDebugInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalDebugInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDebugInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDebugInfo.WBP_PalDebugInfo_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDebugInfo_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDebugInfo_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDebugInfo.WBP_PalDebugInfo_C.ExecuteUbergraph_WBP_PalDebugInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBuildConfiguration_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PalDebugInfo_C::ExecuteUbergraph_WBP_PalDebugInfo(int32 EntryPoint, const class FString& CallFunc_GetDisplayVersion_ReturnValue, const class FString& CallFunc_GetBuildConfiguration_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDebugInfo_C", "ExecuteUbergraph_WBP_PalDebugInfo");

	Params::UWBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayVersion_ReturnValue = CallFunc_GetDisplayVersion_ReturnValue;
	Parms.CallFunc_GetBuildConfiguration_ReturnValue = CallFunc_GetBuildConfiguration_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


