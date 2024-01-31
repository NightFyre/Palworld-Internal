#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObjectRegistrationToManager.BP_MapObjectRegistrationToManager_C
// (Actor)

class UClass* ABP_MapObjectRegistrationToManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObjectRegistrationToManager_C");

	return Clss;
}


// BP_MapObjectRegistrationToManager_C BP_MapObjectRegistrationToManager.Default__BP_MapObjectRegistrationToManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObjectRegistrationToManager_C* ABP_MapObjectRegistrationToManager_C::GetDefaultObj()
{
	static class ABP_MapObjectRegistrationToManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObjectRegistrationToManager_C*>(ABP_MapObjectRegistrationToManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


