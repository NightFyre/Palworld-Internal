#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_VolcanoVillage001.BP_MultiTalk_VolcanoVillage001_C
// (None)

class UClass* UBP_MultiTalk_VolcanoVillage001_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_VolcanoVillage001_C");

	return Clss;
}


// BP_MultiTalk_VolcanoVillage001_C BP_MultiTalk_VolcanoVillage001.Default__BP_MultiTalk_VolcanoVillage001_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_VolcanoVillage001_C* UBP_MultiTalk_VolcanoVillage001_C::GetDefaultObj()
{
	static class UBP_MultiTalk_VolcanoVillage001_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_VolcanoVillage001_C*>(UBP_MultiTalk_VolcanoVillage001_C::StaticClass()->DefaultObject);

	return Default;
}

}


