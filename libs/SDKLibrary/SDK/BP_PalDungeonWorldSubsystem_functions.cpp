#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalDungeonWorldSubsystem.BP_PalDungeonWorldSubsystem_C
// (None)

class UClass* UBP_PalDungeonWorldSubsystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalDungeonWorldSubsystem_C");

	return Clss;
}


// BP_PalDungeonWorldSubsystem_C BP_PalDungeonWorldSubsystem.Default__BP_PalDungeonWorldSubsystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalDungeonWorldSubsystem_C* UBP_PalDungeonWorldSubsystem_C::GetDefaultObj()
{
	static class UBP_PalDungeonWorldSubsystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalDungeonWorldSubsystem_C*>(UBP_PalDungeonWorldSubsystem_C::StaticClass()->DefaultObject);

	return Default;
}

}


