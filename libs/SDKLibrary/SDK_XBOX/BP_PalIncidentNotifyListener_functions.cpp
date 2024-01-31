#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalIncidentNotifyListener.BP_PalIncidentNotifyListener_C
// (None)

class UClass* UBP_PalIncidentNotifyListener_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalIncidentNotifyListener_C");

	return Clss;
}


// BP_PalIncidentNotifyListener_C BP_PalIncidentNotifyListener.Default__BP_PalIncidentNotifyListener_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalIncidentNotifyListener_C* UBP_PalIncidentNotifyListener_C::GetDefaultObj()
{
	static class UBP_PalIncidentNotifyListener_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalIncidentNotifyListener_C*>(UBP_PalIncidentNotifyListener_C::StaticClass()->DefaultObject);

	return Default;
}

}


