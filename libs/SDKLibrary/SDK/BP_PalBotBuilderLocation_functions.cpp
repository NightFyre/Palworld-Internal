#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalBotBuilderLocation.BP_PalBotBuilderLocation_C
// (Actor)

class UClass* ABP_PalBotBuilderLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalBotBuilderLocation_C");

	return Clss;
}


// BP_PalBotBuilderLocation_C BP_PalBotBuilderLocation.Default__BP_PalBotBuilderLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalBotBuilderLocation_C* ABP_PalBotBuilderLocation_C::GetDefaultObj()
{
	static class ABP_PalBotBuilderLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalBotBuilderLocation_C*>(ABP_PalBotBuilderLocation_C::StaticClass()->DefaultObject);

	return Default;
}

}


