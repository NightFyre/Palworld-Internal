#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UniqueRideAnime_BlackFurDragon.BP_UniqueRideAnime_BlackFurDragon_C
// (None)

class UClass* UBP_UniqueRideAnime_BlackFurDragon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UniqueRideAnime_BlackFurDragon_C");

	return Clss;
}


// BP_UniqueRideAnime_BlackFurDragon_C BP_UniqueRideAnime_BlackFurDragon.Default__BP_UniqueRideAnime_BlackFurDragon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UniqueRideAnime_BlackFurDragon_C* UBP_UniqueRideAnime_BlackFurDragon_C::GetDefaultObj()
{
	static class UBP_UniqueRideAnime_BlackFurDragon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UniqueRideAnime_BlackFurDragon_C*>(UBP_UniqueRideAnime_BlackFurDragon_C::StaticClass()->DefaultObject);

	return Default;
}

}


