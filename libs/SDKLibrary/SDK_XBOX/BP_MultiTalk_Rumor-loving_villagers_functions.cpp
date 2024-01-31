#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_Rumor-loving_villagers.BP_MultiTalk_Rumor-loving_villagers_C
// (None)

class UClass* UBP_MultiTalk_RumorMinusloving_villagers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_Rumor-loving_villagers_C");

	return Clss;
}


// BP_MultiTalk_Rumor-loving_villagers_C BP_MultiTalk_Rumor-loving_villagers.Default__BP_MultiTalk_Rumor-loving_villagers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_RumorMinusloving_villagers_C* UBP_MultiTalk_RumorMinusloving_villagers_C::GetDefaultObj()
{
	static class UBP_MultiTalk_RumorMinusloving_villagers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_RumorMinusloving_villagers_C*>(UBP_MultiTalk_RumorMinusloving_villagers_C::StaticClass()->DefaultObject);

	return Default;
}

}


