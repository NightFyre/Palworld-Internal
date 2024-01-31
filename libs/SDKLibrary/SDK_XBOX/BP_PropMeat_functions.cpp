#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PropMeat.BP_PropMeat_C
// (Actor)

class UClass* ABP_PropMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PropMeat_C");

	return Clss;
}


// BP_PropMeat_C BP_PropMeat.Default__BP_PropMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PropMeat_C* ABP_PropMeat_C::GetDefaultObj()
{
	static class ABP_PropMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PropMeat_C*>(ABP_PropMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


