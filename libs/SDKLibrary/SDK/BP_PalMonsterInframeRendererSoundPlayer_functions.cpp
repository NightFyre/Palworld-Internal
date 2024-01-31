#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalMonsterInframeRendererSoundPlayer.BP_PalMonsterInframeRendererSoundPlayer_C
// (Actor)

class UClass* ABP_PalMonsterInframeRendererSoundPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalMonsterInframeRendererSoundPlayer_C");

	return Clss;
}


// BP_PalMonsterInframeRendererSoundPlayer_C BP_PalMonsterInframeRendererSoundPlayer.Default__BP_PalMonsterInframeRendererSoundPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalMonsterInframeRendererSoundPlayer_C* ABP_PalMonsterInframeRendererSoundPlayer_C::GetDefaultObj()
{
	static class ABP_PalMonsterInframeRendererSoundPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalMonsterInframeRendererSoundPlayer_C*>(ABP_PalMonsterInframeRendererSoundPlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


