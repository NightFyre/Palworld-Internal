#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_PvPVillage005.BP_MultiTalk_PvPVillage005_C
// (None)

class UClass* UBP_MultiTalk_PvPVillage005_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_PvPVillage005_C");

	return Clss;
}


// BP_MultiTalk_PvPVillage005_C BP_MultiTalk_PvPVillage005.Default__BP_MultiTalk_PvPVillage005_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_PvPVillage005_C* UBP_MultiTalk_PvPVillage005_C::GetDefaultObj()
{
	static class UBP_MultiTalk_PvPVillage005_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_PvPVillage005_C*>(UBP_MultiTalk_PvPVillage005_C::StaticClass()->DefaultObject);

	return Default;
}

}


