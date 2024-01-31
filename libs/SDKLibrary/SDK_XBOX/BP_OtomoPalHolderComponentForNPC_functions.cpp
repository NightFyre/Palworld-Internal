#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OtomoPalHolderComponentForNPC.BP_OtomoPalHolderComponentForNPC_C
// (None)

class UClass* UBP_OtomoPalHolderComponentForNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OtomoPalHolderComponentForNPC_C");

	return Clss;
}


// BP_OtomoPalHolderComponentForNPC_C BP_OtomoPalHolderComponentForNPC.Default__BP_OtomoPalHolderComponentForNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OtomoPalHolderComponentForNPC_C* UBP_OtomoPalHolderComponentForNPC_C::GetDefaultObj()
{
	static class UBP_OtomoPalHolderComponentForNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OtomoPalHolderComponentForNPC_C*>(UBP_OtomoPalHolderComponentForNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_OtomoPalHolderComponentForNPC.BP_OtomoPalHolderComponentForNPC_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_OtomoPalHolderComponentForNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponentForNPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OtomoPalHolderComponentForNPC.BP_OtomoPalHolderComponentForNPC_C.ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponentForNPC_C::ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OtomoPalHolderComponentForNPC_C", "ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC");

	Params::UBP_OtomoPalHolderComponentForNPC_C_ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


