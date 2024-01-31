#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionDeath_SelfDestruct_SelfExplosion.BP_ActionDeath_SelfDestruct_SelfExplosion_C
// (None)

class UClass* UBP_ActionDeath_SelfDestruct_SelfExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionDeath_SelfDestruct_SelfExplosion_C");

	return Clss;
}


// BP_ActionDeath_SelfDestruct_SelfExplosion_C BP_ActionDeath_SelfDestruct_SelfExplosion.Default__BP_ActionDeath_SelfDestruct_SelfExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionDeath_SelfDestruct_SelfExplosion_C* UBP_ActionDeath_SelfDestruct_SelfExplosion_C::GetDefaultObj()
{
	static class UBP_ActionDeath_SelfDestruct_SelfExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionDeath_SelfDestruct_SelfExplosion_C*>(UBP_ActionDeath_SelfDestruct_SelfExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


