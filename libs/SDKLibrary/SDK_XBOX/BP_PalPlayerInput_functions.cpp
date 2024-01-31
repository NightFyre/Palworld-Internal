#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPlayerInput.BP_PalPlayerInput_C
// (None)

class UClass* UBP_PalPlayerInput_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPlayerInput_C");

	return Clss;
}


// BP_PalPlayerInput_C BP_PalPlayerInput.Default__BP_PalPlayerInput_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalPlayerInput_C* UBP_PalPlayerInput_C::GetDefaultObj()
{
	static class UBP_PalPlayerInput_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalPlayerInput_C*>(UBP_PalPlayerInput_C::StaticClass()->DefaultObject);

	return Default;
}

}


