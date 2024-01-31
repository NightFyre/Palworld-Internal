#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalOptionSubsystem.BP_PalOptionSubsystem_C
// (None)

class UClass* UBP_PalOptionSubsystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalOptionSubsystem_C");

	return Clss;
}


// BP_PalOptionSubsystem_C BP_PalOptionSubsystem.Default__BP_PalOptionSubsystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalOptionSubsystem_C* UBP_PalOptionSubsystem_C::GetDefaultObj()
{
	static class UBP_PalOptionSubsystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalOptionSubsystem_C*>(UBP_PalOptionSubsystem_C::StaticClass()->DefaultObject);

	return Default;
}

}


