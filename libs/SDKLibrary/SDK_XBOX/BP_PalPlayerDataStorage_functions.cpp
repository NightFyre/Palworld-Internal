#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPlayerDataStorage.BP_PalPlayerDataStorage_C
// (None)

class UClass* UBP_PalPlayerDataStorage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPlayerDataStorage_C");

	return Clss;
}


// BP_PalPlayerDataStorage_C BP_PalPlayerDataStorage.Default__BP_PalPlayerDataStorage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalPlayerDataStorage_C* UBP_PalPlayerDataStorage_C::GetDefaultObj()
{
	static class UBP_PalPlayerDataStorage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalPlayerDataStorage_C*>(UBP_PalPlayerDataStorage_C::StaticClass()->DefaultObject);

	return Default;
}

}


