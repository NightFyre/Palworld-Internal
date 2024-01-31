#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionWatering.BP_ActionWatering_C
// (None)

class UClass* UBP_ActionWatering_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionWatering_C");

	return Clss;
}


// BP_ActionWatering_C BP_ActionWatering.Default__BP_ActionWatering_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionWatering_C* UBP_ActionWatering_C::GetDefaultObj()
{
	static class UBP_ActionWatering_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionWatering_C*>(UBP_ActionWatering_C::StaticClass()->DefaultObject);

	return Default;
}

}


