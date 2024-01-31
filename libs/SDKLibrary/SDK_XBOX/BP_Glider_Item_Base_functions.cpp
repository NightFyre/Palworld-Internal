#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Glider_Item_Base.BP_Glider_Item_Base_C
// (Actor)

class UClass* ABP_Glider_Item_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Glider_Item_Base_C");

	return Clss;
}


// BP_Glider_Item_Base_C BP_Glider_Item_Base.Default__BP_Glider_Item_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Glider_Item_Base_C* ABP_Glider_Item_Base_C::GetDefaultObj()
{
	static class ABP_Glider_Item_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Glider_Item_Base_C*>(ABP_Glider_Item_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


