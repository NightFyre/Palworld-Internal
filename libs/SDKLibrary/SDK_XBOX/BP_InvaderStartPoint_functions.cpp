#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InvaderStartPoint.BP_InvaderStartPoint_C
// (Actor)

class UClass* ABP_InvaderStartPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InvaderStartPoint_C");

	return Clss;
}


// BP_InvaderStartPoint_C BP_InvaderStartPoint.Default__BP_InvaderStartPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_InvaderStartPoint_C* ABP_InvaderStartPoint_C::GetDefaultObj()
{
	static class ABP_InvaderStartPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_InvaderStartPoint_C*>(ABP_InvaderStartPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


