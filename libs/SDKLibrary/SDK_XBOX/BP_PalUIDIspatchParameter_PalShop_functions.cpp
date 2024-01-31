#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalUIDIspatchParameter_PalShop.BP_PalUIDIspatchParameter_PalShop_C
// (None)

class UClass* UBP_PalUIDIspatchParameter_PalShop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalUIDIspatchParameter_PalShop_C");

	return Clss;
}


// BP_PalUIDIspatchParameter_PalShop_C BP_PalUIDIspatchParameter_PalShop.Default__BP_PalUIDIspatchParameter_PalShop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalUIDIspatchParameter_PalShop_C* UBP_PalUIDIspatchParameter_PalShop_C::GetDefaultObj()
{
	static class UBP_PalUIDIspatchParameter_PalShop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalUIDIspatchParameter_PalShop_C*>(UBP_PalUIDIspatchParameter_PalShop_C::StaticClass()->DefaultObject);

	return Default;
}

}


