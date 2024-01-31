#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObject_DamagableRock_PV.BP_MapObject_DamagableRock_PV_C
// (Actor)

class UClass* ABP_MapObject_DamagableRock_PV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObject_DamagableRock_PV_C");

	return Clss;
}


// BP_MapObject_DamagableRock_PV_C BP_MapObject_DamagableRock_PV.Default__BP_MapObject_DamagableRock_PV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObject_DamagableRock_PV_C* ABP_MapObject_DamagableRock_PV_C::GetDefaultObj()
{
	static class ABP_MapObject_DamagableRock_PV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObject_DamagableRock_PV_C*>(ABP_MapObject_DamagableRock_PV_C::StaticClass()->DefaultObject);

	return Default;
}

}


