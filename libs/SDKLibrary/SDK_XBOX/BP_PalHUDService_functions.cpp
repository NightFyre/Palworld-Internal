#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalHUDService.BP_PalHUDService_C
// (None)

class UClass* UBP_PalHUDService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalHUDService_C");

	return Clss;
}


// BP_PalHUDService_C BP_PalHUDService.Default__BP_PalHUDService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalHUDService_C* UBP_PalHUDService_C::GetDefaultObj()
{
	static class UBP_PalHUDService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalHUDService_C*>(UBP_PalHUDService_C::StaticClass()->DefaultObject);

	return Default;
}

}


