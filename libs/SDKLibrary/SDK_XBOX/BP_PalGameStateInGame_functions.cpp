#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalGameStateInGame.BP_PalGameStateInGame_C
// (Actor)

class UClass* ABP_PalGameStateInGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalGameStateInGame_C");

	return Clss;
}


// BP_PalGameStateInGame_C BP_PalGameStateInGame.Default__BP_PalGameStateInGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalGameStateInGame_C* ABP_PalGameStateInGame_C::GetDefaultObj()
{
	static class ABP_PalGameStateInGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalGameStateInGame_C*>(ABP_PalGameStateInGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


