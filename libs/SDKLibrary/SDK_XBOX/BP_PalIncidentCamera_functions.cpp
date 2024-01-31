#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalIncidentCamera.BP_PalIncidentCamera_C
// (Actor)

class UClass* ABP_PalIncidentCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalIncidentCamera_C");

	return Clss;
}


// BP_PalIncidentCamera_C BP_PalIncidentCamera.Default__BP_PalIncidentCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalIncidentCamera_C* ABP_PalIncidentCamera_C::GetDefaultObj()
{
	static class ABP_PalIncidentCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalIncidentCamera_C*>(ABP_PalIncidentCamera_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalIncidentCamera.BP_PalIncidentCamera_C.SetCameraTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PalIncidentCamera_C::SetCameraTransform(const struct FTransform& Transform, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentCamera_C", "SetCameraTransform");

	Params::ABP_PalIncidentCamera_C_SetCameraTransform_Params Parms{};

	Parms.Transform = Transform;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


