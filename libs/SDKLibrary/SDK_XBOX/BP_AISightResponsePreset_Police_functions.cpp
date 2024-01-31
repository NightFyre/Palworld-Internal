#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AISightResponsePreset_Police.BP_AISightResponsePreset_Police_C
// (None)

class UClass* UBP_AISightResponsePreset_Police_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AISightResponsePreset_Police_C");

	return Clss;
}


// BP_AISightResponsePreset_Police_C BP_AISightResponsePreset_Police.Default__BP_AISightResponsePreset_Police_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AISightResponsePreset_Police_C* UBP_AISightResponsePreset_Police_C::GetDefaultObj()
{
	static class UBP_AISightResponsePreset_Police_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AISightResponsePreset_Police_C*>(UBP_AISightResponsePreset_Police_C::StaticClass()->DefaultObject);

	return Default;
}

}


