#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalAmbientSoundLine_Waterfall_Small.BP_PalAmbientSoundLine_Waterfall_Small_C
// (Actor)

class UClass* ABP_PalAmbientSoundLine_Waterfall_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalAmbientSoundLine_Waterfall_Small_C");

	return Clss;
}


// BP_PalAmbientSoundLine_Waterfall_Small_C BP_PalAmbientSoundLine_Waterfall_Small.Default__BP_PalAmbientSoundLine_Waterfall_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalAmbientSoundLine_Waterfall_Small_C* ABP_PalAmbientSoundLine_Waterfall_Small_C::GetDefaultObj()
{
	static class ABP_PalAmbientSoundLine_Waterfall_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalAmbientSoundLine_Waterfall_Small_C*>(ABP_PalAmbientSoundLine_Waterfall_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


