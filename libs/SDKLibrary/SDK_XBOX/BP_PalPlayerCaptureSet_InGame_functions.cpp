#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPlayerCaptureSet_InGame.BP_PalPlayerCaptureSet_InGame_C
// (Actor)

class UClass* ABP_PalPlayerCaptureSet_InGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPlayerCaptureSet_InGame_C");

	return Clss;
}


// BP_PalPlayerCaptureSet_InGame_C BP_PalPlayerCaptureSet_InGame.Default__BP_PalPlayerCaptureSet_InGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalPlayerCaptureSet_InGame_C* ABP_PalPlayerCaptureSet_InGame_C::GetDefaultObj()
{
	static class ABP_PalPlayerCaptureSet_InGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalPlayerCaptureSet_InGame_C*>(ABP_PalPlayerCaptureSet_InGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


