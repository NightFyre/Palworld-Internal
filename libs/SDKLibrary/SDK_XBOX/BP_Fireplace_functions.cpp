#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Fireplace.BP_Fireplace_C
// (Actor)

class UClass* ABP_Fireplace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Fireplace_C");

	return Clss;
}


// BP_Fireplace_C BP_Fireplace.Default__BP_Fireplace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Fireplace_C* ABP_Fireplace_C::GetDefaultObj()
{
	static class ABP_Fireplace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Fireplace_C*>(ABP_Fireplace_C::StaticClass()->DefaultObject);

	return Default;
}

}


