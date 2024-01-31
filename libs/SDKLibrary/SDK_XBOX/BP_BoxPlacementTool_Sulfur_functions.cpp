#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoxPlacementTool_Sulfur.BP_BoxPlacementTool_Sulfur_C
// (Actor)

class UClass* ABP_BoxPlacementTool_Sulfur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoxPlacementTool_Sulfur_C");

	return Clss;
}


// BP_BoxPlacementTool_Sulfur_C BP_BoxPlacementTool_Sulfur.Default__BP_BoxPlacementTool_Sulfur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoxPlacementTool_Sulfur_C* ABP_BoxPlacementTool_Sulfur_C::GetDefaultObj()
{
	static class ABP_BoxPlacementTool_Sulfur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoxPlacementTool_Sulfur_C*>(ABP_BoxPlacementTool_Sulfur_C::StaticClass()->DefaultObject);

	return Default;
}

}


