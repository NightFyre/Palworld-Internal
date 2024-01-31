#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionPalLiftup.BP_ActionPalLiftup_C
// (None)

class UClass* UBP_ActionPalLiftup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionPalLiftup_C");

	return Clss;
}


// BP_ActionPalLiftup_C BP_ActionPalLiftup.Default__BP_ActionPalLiftup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionPalLiftup_C* UBP_ActionPalLiftup_C::GetDefaultObj()
{
	static class UBP_ActionPalLiftup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionPalLiftup_C*>(UBP_ActionPalLiftup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.StopAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftup_C::StopAnimation(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftup_C", "StopAnimation");

	Params::UBP_ActionPalLiftup_C_StopAnimation_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionPalLiftup_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftup_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.OnBreakAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionPalLiftup_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftup_C", "OnBreakAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.PlayStartLiftupMontage
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ActionPalLiftup_C::PlayStartLiftupMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftup_C", "PlayStartLiftupMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionPalLiftup.BP_ActionPalLiftup_C.ExecuteUbergraph_BP_ActionPalLiftup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPalLiftup_C::ExecuteUbergraph_BP_ActionPalLiftup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPalLiftup_C", "ExecuteUbergraph_BP_ActionPalLiftup");

	Params::UBP_ActionPalLiftup_C_ExecuteUbergraph_BP_ActionPalLiftup_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


