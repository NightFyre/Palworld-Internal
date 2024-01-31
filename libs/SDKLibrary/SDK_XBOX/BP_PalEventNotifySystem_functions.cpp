#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalEventNotifySystem.BP_PalEventNotifySystem_C
// (None)

class UClass* UBP_PalEventNotifySystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalEventNotifySystem_C");

	return Clss;
}


// BP_PalEventNotifySystem_C BP_PalEventNotifySystem.Default__BP_PalEventNotifySystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalEventNotifySystem_C* UBP_PalEventNotifySystem_C::GetDefaultObj()
{
	static class UBP_PalEventNotifySystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalEventNotifySystem_C*>(UBP_PalEventNotifySystem_C::StaticClass()->DefaultObject);

	return Default;
}

}


