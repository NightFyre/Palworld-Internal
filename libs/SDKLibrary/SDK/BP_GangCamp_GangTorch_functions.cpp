#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GangCamp_GangTorch.BP_GangCamp_GangTorch_C
// (Actor)

class UClass* ABP_GangCamp_GangTorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GangCamp_GangTorch_C");

	return Clss;
}


// BP_GangCamp_GangTorch_C BP_GangCamp_GangTorch.Default__BP_GangCamp_GangTorch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GangCamp_GangTorch_C* ABP_GangCamp_GangTorch_C::GetDefaultObj()
{
	static class ABP_GangCamp_GangTorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GangCamp_GangTorch_C*>(ABP_GangCamp_GangTorch_C::StaticClass()->DefaultObject);

	return Default;
}

}


