#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalBlockingVolume.BP_PalBlockingVolume_C
// (Actor)

class UClass* ABP_PalBlockingVolume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalBlockingVolume_C");

	return Clss;
}


// BP_PalBlockingVolume_C BP_PalBlockingVolume.Default__BP_PalBlockingVolume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalBlockingVolume_C* ABP_PalBlockingVolume_C::GetDefaultObj()
{
	static class ABP_PalBlockingVolume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalBlockingVolume_C*>(ABP_PalBlockingVolume_C::StaticClass()->DefaultObject);

	return Default;
}

}


