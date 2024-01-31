#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SoundSlot_Player.BP_SoundSlot_Player_C
// (None)

class UClass* UBP_SoundSlot_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SoundSlot_Player_C");

	return Clss;
}


// BP_SoundSlot_Player_C BP_SoundSlot_Player.Default__BP_SoundSlot_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SoundSlot_Player_C* UBP_SoundSlot_Player_C::GetDefaultObj()
{
	static class UBP_SoundSlot_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SoundSlot_Player_C*>(UBP_SoundSlot_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


