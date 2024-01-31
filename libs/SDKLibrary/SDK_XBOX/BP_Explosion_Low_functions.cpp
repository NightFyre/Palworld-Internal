#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Explosion_Low.BP_Explosion_Low_C
// (Actor)

class UClass* ABP_Explosion_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Explosion_Low_C");

	return Clss;
}


// BP_Explosion_Low_C BP_Explosion_Low.Default__BP_Explosion_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Explosion_Low_C* ABP_Explosion_Low_C::GetDefaultObj()
{
	static class ABP_Explosion_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Explosion_Low_C*>(ABP_Explosion_Low_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Explosion_Low.BP_Explosion_Low_C.BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           PSystem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Low_C::BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_Low_C", "BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");

	Params::ABP_Explosion_Low_C_BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature_Params Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Explosion_Low.BP_Explosion_Low_C.ExecuteUbergraph_BP_Explosion_Low
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_ComponentBoundEvent_PSystem                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Low_C::ExecuteUbergraph_BP_Explosion_Low(int32 EntryPoint, class UNiagaraComponent* K2Node_ComponentBoundEvent_PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_Low_C", "ExecuteUbergraph_BP_Explosion_Low");

	Params::ABP_Explosion_Low_C_ExecuteUbergraph_BP_Explosion_Low_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_PSystem = K2Node_ComponentBoundEvent_PSystem;

	UObject::ProcessEvent(Func, &Parms);

}

}


