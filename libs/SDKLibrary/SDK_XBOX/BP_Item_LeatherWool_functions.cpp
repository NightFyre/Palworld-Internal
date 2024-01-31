#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_LeatherWool.BP_Item_LeatherWool_C
// (Actor)

class UClass* ABP_Item_LeatherWool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_LeatherWool_C");

	return Clss;
}


// BP_Item_LeatherWool_C BP_Item_LeatherWool.Default__BP_Item_LeatherWool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Item_LeatherWool_C* ABP_Item_LeatherWool_C::GetDefaultObj()
{
	static class ABP_Item_LeatherWool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Item_LeatherWool_C*>(ABP_Item_LeatherWool_C::StaticClass()->DefaultObject);

	return Default;
}

}


