#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalAmbientSoundArea_Desert.BP_PalAmbientSoundArea_Desert_C
// (Actor)

class UClass* ABP_PalAmbientSoundArea_Desert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalAmbientSoundArea_Desert_C");

	return Clss;
}


// BP_PalAmbientSoundArea_Desert_C BP_PalAmbientSoundArea_Desert.Default__BP_PalAmbientSoundArea_Desert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalAmbientSoundArea_Desert_C* ABP_PalAmbientSoundArea_Desert_C::GetDefaultObj()
{
	static class ABP_PalAmbientSoundArea_Desert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalAmbientSoundArea_Desert_C*>(ABP_PalAmbientSoundArea_Desert_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalAmbientSoundArea_Desert.BP_PalAmbientSoundArea_Desert_C.GetAreaCollision
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* ABP_PalAmbientSoundArea_Desert_C::GetAreaCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAmbientSoundArea_Desert_C", "GetAreaCollision");

	Params::ABP_PalAmbientSoundArea_Desert_C_GetAreaCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


