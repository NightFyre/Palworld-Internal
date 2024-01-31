#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VisualEffect_DebugRefresh.BP_VisualEffect_DebugRefresh_C
// (None)

class UClass* UBP_VisualEffect_DebugRefresh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VisualEffect_DebugRefresh_C");

	return Clss;
}


// BP_VisualEffect_DebugRefresh_C BP_VisualEffect_DebugRefresh.Default__BP_VisualEffect_DebugRefresh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VisualEffect_DebugRefresh_C* UBP_VisualEffect_DebugRefresh_C::GetDefaultObj()
{
	static class UBP_VisualEffect_DebugRefresh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VisualEffect_DebugRefresh_C*>(UBP_VisualEffect_DebugRefresh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VisualEffect_DebugRefresh.BP_VisualEffect_DebugRefresh_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_DebugRefresh_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_DebugRefresh_C", "OnBeginVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_DebugRefresh.BP_VisualEffect_DebugRefresh_C.ExecuteUbergraph_BP_VisualEffect_DebugRefresh
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_DebugRefresh_C::ExecuteUbergraph_BP_VisualEffect_DebugRefresh(int32 EntryPoint, class APalCharacter* CallFunc_GetCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_DebugRefresh_C", "ExecuteUbergraph_BP_VisualEffect_DebugRefresh");

	Params::UBP_VisualEffect_DebugRefresh_C_ExecuteUbergraph_BP_VisualEffect_DebugRefresh_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


