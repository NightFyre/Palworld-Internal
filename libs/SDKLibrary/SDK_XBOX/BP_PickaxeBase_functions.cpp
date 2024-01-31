#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickaxeBase.BP_PickaxeBase_C
// (Actor)

class UClass* ABP_PickaxeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickaxeBase_C");

	return Clss;
}


// BP_PickaxeBase_C BP_PickaxeBase.Default__BP_PickaxeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickaxeBase_C* ABP_PickaxeBase_C::GetDefaultObj()
{
	static class ABP_PickaxeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickaxeBase_C*>(ABP_PickaxeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


