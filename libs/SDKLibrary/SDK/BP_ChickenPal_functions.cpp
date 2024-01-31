#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ChickenPal.BP_ChickenPal_C
// (Actor, Pawn)

class UClass* ABP_ChickenPal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ChickenPal_C");

	return Clss;
}


// BP_ChickenPal_C BP_ChickenPal.Default__BP_ChickenPal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ChickenPal_C* ABP_ChickenPal_C::GetDefaultObj()
{
	static class ABP_ChickenPal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ChickenPal_C*>(ABP_ChickenPal_C::StaticClass()->DefaultObject);

	return Default;
}

}


