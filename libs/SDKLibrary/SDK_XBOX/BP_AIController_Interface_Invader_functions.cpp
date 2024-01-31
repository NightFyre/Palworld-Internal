#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIController_Interface_Invader.BP_AIController_Interface_Invader_C
// (None)

class UClass* IBP_AIController_Interface_Invader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIController_Interface_Invader_C");

	return Clss;
}


// BP_AIController_Interface_Invader_C BP_AIController_Interface_Invader.Default__BP_AIController_Interface_Invader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_AIController_Interface_Invader_C* IBP_AIController_Interface_Invader_C::GetDefaultObj()
{
	static class IBP_AIController_Interface_Invader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_AIController_Interface_Invader_C*>(IBP_AIController_Interface_Invader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIController_Interface_Invader.BP_AIController_Interface_Invader_C.BindOnInvaderArrivedDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_AIController_Interface_Invader_C::BindOnInvaderArrivedDelegate(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Interface_Invader_C", "BindOnInvaderArrivedDelegate");

	Params::IBP_AIController_Interface_Invader_C_BindOnInvaderArrivedDelegate_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Interface_Invader.BP_AIController_Interface_Invader_C.OnInvaderArrived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_AIController_Interface_Invader_C::OnInvaderArrived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Interface_Invader_C", "OnInvaderArrived");



	UObject::ProcessEvent(Func, nullptr);

}

}


