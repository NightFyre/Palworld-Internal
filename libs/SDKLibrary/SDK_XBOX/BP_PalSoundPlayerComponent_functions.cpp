#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSoundPlayerComponent.BP_PalSoundPlayerComponent_C
// (None)

class UClass* UBP_PalSoundPlayerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSoundPlayerComponent_C");

	return Clss;
}


// BP_PalSoundPlayerComponent_C BP_PalSoundPlayerComponent.Default__BP_PalSoundPlayerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalSoundPlayerComponent_C* UBP_PalSoundPlayerComponent_C::GetDefaultObj()
{
	static class UBP_PalSoundPlayerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalSoundPlayerComponent_C*>(UBP_PalSoundPlayerComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


