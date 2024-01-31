#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalIncidentNotifyListener_NPCTalk.BP_PalIncidentNotifyListener_NPCTalk_C
// (None)

class UClass* UBP_PalIncidentNotifyListener_NPCTalk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalIncidentNotifyListener_NPCTalk_C");

	return Clss;
}


// BP_PalIncidentNotifyListener_NPCTalk_C BP_PalIncidentNotifyListener_NPCTalk.Default__BP_PalIncidentNotifyListener_NPCTalk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalIncidentNotifyListener_NPCTalk_C* UBP_PalIncidentNotifyListener_NPCTalk_C::GetDefaultObj()
{
	static class UBP_PalIncidentNotifyListener_NPCTalk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalIncidentNotifyListener_NPCTalk_C*>(UBP_PalIncidentNotifyListener_NPCTalk_C::StaticClass()->DefaultObject);

	return Default;
}

}


