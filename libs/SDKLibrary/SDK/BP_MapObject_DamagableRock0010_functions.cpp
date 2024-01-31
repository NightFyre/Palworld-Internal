#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObject_DamagableRock0010.BP_MapObject_DamagableRock0010_C
// (Actor)

class UClass* ABP_MapObject_DamagableRock0010_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObject_DamagableRock0010_C");

	return Clss;
}


// BP_MapObject_DamagableRock0010_C BP_MapObject_DamagableRock0010.Default__BP_MapObject_DamagableRock0010_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObject_DamagableRock0010_C* ABP_MapObject_DamagableRock0010_C::GetDefaultObj()
{
	static class ABP_MapObject_DamagableRock0010_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObject_DamagableRock0010_C*>(ABP_MapObject_DamagableRock0010_C::StaticClass()->DefaultObject);

	return Default;
}

}


