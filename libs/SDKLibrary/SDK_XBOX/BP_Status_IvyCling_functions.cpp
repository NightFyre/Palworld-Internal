#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Status_IvyCling.BP_Status_IvyCling_C
// (None)

class UClass* UBP_Status_IvyCling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Status_IvyCling_C");

	return Clss;
}


// BP_Status_IvyCling_C BP_Status_IvyCling.Default__BP_Status_IvyCling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Status_IvyCling_C* UBP_Status_IvyCling_C::GetDefaultObj()
{
	static class UBP_Status_IvyCling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Status_IvyCling_C*>(UBP_Status_IvyCling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Status_IvyCling.BP_Status_IvyCling_C.OnBeginStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_IvyCling_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_IvyCling_C", "OnBeginStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_IvyCling.BP_Status_IvyCling_C.OnEndStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_IvyCling_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_IvyCling_C", "OnEndStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_IvyCling.BP_Status_IvyCling_C.ExecuteUbergraph_BP_Status_IvyCling
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSelfPalElement_Has                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Status_IvyCling_C::ExecuteUbergraph_BP_Status_IvyCling(int32 EntryPoint, bool CallFunc_HasSelfPalElement_Has, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_IvyCling_C", "ExecuteUbergraph_BP_Status_IvyCling");

	Params::UBP_Status_IvyCling_C_ExecuteUbergraph_BP_Status_IvyCling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasSelfPalElement_Has = CallFunc_HasSelfPalElement_Has;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


