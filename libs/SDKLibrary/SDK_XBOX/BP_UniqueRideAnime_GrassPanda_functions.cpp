#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UniqueRideAnime_GrassPanda.BP_UniqueRideAnime_GrassPanda_C
// (None)

class UClass* UBP_UniqueRideAnime_GrassPanda_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UniqueRideAnime_GrassPanda_C");

	return Clss;
}


// BP_UniqueRideAnime_GrassPanda_C BP_UniqueRideAnime_GrassPanda.Default__BP_UniqueRideAnime_GrassPanda_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UniqueRideAnime_GrassPanda_C* UBP_UniqueRideAnime_GrassPanda_C::GetDefaultObj()
{
	static class UBP_UniqueRideAnime_GrassPanda_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UniqueRideAnime_GrassPanda_C*>(UBP_UniqueRideAnime_GrassPanda_C::StaticClass()->DefaultObject);

	return Default;
}

}


