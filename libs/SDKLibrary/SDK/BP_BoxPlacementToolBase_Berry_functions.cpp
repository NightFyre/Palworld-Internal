#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoxPlacementToolBase_Berry.BP_BoxPlacementToolBase_Berry_C
// (Actor)

class UClass* ABP_BoxPlacementToolBase_Berry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoxPlacementToolBase_Berry_C");

	return Clss;
}


// BP_BoxPlacementToolBase_Berry_C BP_BoxPlacementToolBase_Berry.Default__BP_BoxPlacementToolBase_Berry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoxPlacementToolBase_Berry_C* ABP_BoxPlacementToolBase_Berry_C::GetDefaultObj()
{
	static class ABP_BoxPlacementToolBase_Berry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoxPlacementToolBase_Berry_C*>(ABP_BoxPlacementToolBase_Berry_C::StaticClass()->DefaultObject);

	return Default;
}

}


