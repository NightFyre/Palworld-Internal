#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalUIPolicy.BP_PalUIPolicy_C
// (None)

class UClass* UBP_PalUIPolicy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalUIPolicy_C");

	return Clss;
}


// BP_PalUIPolicy_C BP_PalUIPolicy.Default__BP_PalUIPolicy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalUIPolicy_C* UBP_PalUIPolicy_C::GetDefaultObj()
{
	static class UBP_PalUIPolicy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalUIPolicy_C*>(UBP_PalUIPolicy_C::StaticClass()->DefaultObject);

	return Default;
}

}


