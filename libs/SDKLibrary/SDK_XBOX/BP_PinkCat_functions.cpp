#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PinkCat.BP_PinkCat_C
// (Actor, Pawn)

class UClass* ABP_PinkCat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PinkCat_C");

	return Clss;
}


// BP_PinkCat_C BP_PinkCat.Default__BP_PinkCat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PinkCat_C* ABP_PinkCat_C::GetDefaultObj()
{
	static class ABP_PinkCat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PinkCat_C*>(ABP_PinkCat_C::StaticClass()->DefaultObject);

	return Default;
}

}


