#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UniqueRideAnime_ElecPanda.BP_UniqueRideAnime_ElecPanda_C
// (None)

class UClass* UBP_UniqueRideAnime_ElecPanda_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UniqueRideAnime_ElecPanda_C");

	return Clss;
}


// BP_UniqueRideAnime_ElecPanda_C BP_UniqueRideAnime_ElecPanda.Default__BP_UniqueRideAnime_ElecPanda_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UniqueRideAnime_ElecPanda_C* UBP_UniqueRideAnime_ElecPanda_C::GetDefaultObj()
{
	static class UBP_UniqueRideAnime_ElecPanda_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UniqueRideAnime_ElecPanda_C*>(UBP_UniqueRideAnime_ElecPanda_C::StaticClass()->DefaultObject);

	return Default;
}

}


