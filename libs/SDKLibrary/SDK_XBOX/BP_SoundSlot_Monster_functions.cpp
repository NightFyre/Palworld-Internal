#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SoundSlot_Monster.BP_SoundSlot_Monster_C
// (None)

class UClass* UBP_SoundSlot_Monster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SoundSlot_Monster_C");

	return Clss;
}


// BP_SoundSlot_Monster_C BP_SoundSlot_Monster.Default__BP_SoundSlot_Monster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SoundSlot_Monster_C* UBP_SoundSlot_Monster_C::GetDefaultObj()
{
	static class UBP_SoundSlot_Monster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SoundSlot_Monster_C*>(UBP_SoundSlot_Monster_C::StaticClass()->DefaultObject);

	return Default;
}

}


