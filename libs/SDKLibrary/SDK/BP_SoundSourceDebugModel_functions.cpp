#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SoundSourceDebugModel.BP_SoundSourceDebugModel_C
// (Actor)

class UClass* ABP_SoundSourceDebugModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SoundSourceDebugModel_C");

	return Clss;
}


// BP_SoundSourceDebugModel_C BP_SoundSourceDebugModel.Default__BP_SoundSourceDebugModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SoundSourceDebugModel_C* ABP_SoundSourceDebugModel_C::GetDefaultObj()
{
	static class ABP_SoundSourceDebugModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SoundSourceDebugModel_C*>(ABP_SoundSourceDebugModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


