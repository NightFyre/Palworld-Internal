#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoxPlacementTool_Quartz.BP_BoxPlacementTool_Quartz_C
// (Actor)

class UClass* ABP_BoxPlacementTool_Quartz_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoxPlacementTool_Quartz_C");

	return Clss;
}


// BP_BoxPlacementTool_Quartz_C BP_BoxPlacementTool_Quartz.Default__BP_BoxPlacementTool_Quartz_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoxPlacementTool_Quartz_C* ABP_BoxPlacementTool_Quartz_C::GetDefaultObj()
{
	static class ABP_BoxPlacementTool_Quartz_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoxPlacementTool_Quartz_C*>(ABP_BoxPlacementTool_Quartz_C::StaticClass()->DefaultObject);

	return Default;
}

}


