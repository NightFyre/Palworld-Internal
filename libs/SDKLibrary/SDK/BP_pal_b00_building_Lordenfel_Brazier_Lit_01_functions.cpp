#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_pal_b00_building_Lordenfel_Brazier_Lit_01.BP_pal_b00_building_Lordenfel_Brazier_Lit_01_C
// (Actor)

class UClass* ABP_pal_b00_building_Lordenfel_Brazier_Lit_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_pal_b00_building_Lordenfel_Brazier_Lit_01_C");

	return Clss;
}


// BP_pal_b00_building_Lordenfel_Brazier_Lit_01_C BP_pal_b00_building_Lordenfel_Brazier_Lit_01.Default__BP_pal_b00_building_Lordenfel_Brazier_Lit_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_pal_b00_building_Lordenfel_Brazier_Lit_01_C* ABP_pal_b00_building_Lordenfel_Brazier_Lit_01_C::GetDefaultObj()
{
	static class ABP_pal_b00_building_Lordenfel_Brazier_Lit_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_pal_b00_building_Lordenfel_Brazier_Lit_01_C*>(ABP_pal_b00_building_Lordenfel_Brazier_Lit_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


