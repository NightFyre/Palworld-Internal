#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalLoadOutModel.BP_PalLoadOutModel_C
// (None)

class UClass* UBP_PalLoadOutModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalLoadOutModel_C");

	return Clss;
}


// BP_PalLoadOutModel_C BP_PalLoadOutModel.Default__BP_PalLoadOutModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalLoadOutModel_C* UBP_PalLoadOutModel_C::GetDefaultObj()
{
	static class UBP_PalLoadOutModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalLoadOutModel_C*>(UBP_PalLoadOutModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


