#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PropBread.BP_PropBread_C
// (Actor)

class UClass* ABP_PropBread_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PropBread_C");

	return Clss;
}


// BP_PropBread_C BP_PropBread.Default__BP_PropBread_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PropBread_C* ABP_PropBread_C::GetDefaultObj()
{
	static class ABP_PropBread_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PropBread_C*>(ABP_PropBread_C::StaticClass()->DefaultObject);

	return Default;
}

}


