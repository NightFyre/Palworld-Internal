#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalAmbientSoundLine_River.BP_PalAmbientSoundLine_River_C
// (Actor)

class UClass* ABP_PalAmbientSoundLine_River_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalAmbientSoundLine_River_C");

	return Clss;
}


// BP_PalAmbientSoundLine_River_C BP_PalAmbientSoundLine_River.Default__BP_PalAmbientSoundLine_River_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalAmbientSoundLine_River_C* ABP_PalAmbientSoundLine_River_C::GetDefaultObj()
{
	static class ABP_PalAmbientSoundLine_River_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalAmbientSoundLine_River_C*>(ABP_PalAmbientSoundLine_River_C::StaticClass()->DefaultObject);

	return Default;
}

}


