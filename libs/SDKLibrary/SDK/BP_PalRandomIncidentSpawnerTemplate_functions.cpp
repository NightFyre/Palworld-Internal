#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRandomIncidentSpawnerTemplate.BP_PalRandomIncidentSpawnerTemplate_C
// (Actor)

class UClass* ABP_PalRandomIncidentSpawnerTemplate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRandomIncidentSpawnerTemplate_C");

	return Clss;
}


// BP_PalRandomIncidentSpawnerTemplate_C BP_PalRandomIncidentSpawnerTemplate.Default__BP_PalRandomIncidentSpawnerTemplate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalRandomIncidentSpawnerTemplate_C* ABP_PalRandomIncidentSpawnerTemplate_C::GetDefaultObj()
{
	static class ABP_PalRandomIncidentSpawnerTemplate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalRandomIncidentSpawnerTemplate_C*>(ABP_PalRandomIncidentSpawnerTemplate_C::StaticClass()->DefaultObject);

	return Default;
}

}


