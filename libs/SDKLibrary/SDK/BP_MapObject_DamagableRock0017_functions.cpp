#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObject_DamagableRock0017.BP_MapObject_DamagableRock0017_C
// (Actor)

class UClass* ABP_MapObject_DamagableRock0017_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObject_DamagableRock0017_C");

	return Clss;
}


// BP_MapObject_DamagableRock0017_C BP_MapObject_DamagableRock0017.Default__BP_MapObject_DamagableRock0017_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObject_DamagableRock0017_C* ABP_MapObject_DamagableRock0017_C::GetDefaultObj()
{
	static class ABP_MapObject_DamagableRock0017_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObject_DamagableRock0017_C*>(ABP_MapObject_DamagableRock0017_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapObject_DamagableRock0017.BP_MapObject_DamagableRock0017_C.IsShowOutlineInReticleTargetting
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MapObject_DamagableRock0017_C::IsShowOutlineInReticleTargetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_DamagableRock0017_C", "IsShowOutlineInReticleTargetting");

	Params::ABP_MapObject_DamagableRock0017_C_IsShowOutlineInReticleTargetting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


