#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ArchitectureHammer.BP_ArchitectureHammer_C
// (Actor)

class UClass* ABP_ArchitectureHammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ArchitectureHammer_C");

	return Clss;
}


// BP_ArchitectureHammer_C BP_ArchitectureHammer.Default__BP_ArchitectureHammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ArchitectureHammer_C* ABP_ArchitectureHammer_C::GetDefaultObj()
{
	static class ABP_ArchitectureHammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ArchitectureHammer_C*>(ABP_ArchitectureHammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


