#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_RandomBattle_Police.BP_MultiTalk_RandomBattle_Police_C
// (None)

class UClass* UBP_MultiTalk_RandomBattle_Police_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_RandomBattle_Police_C");

	return Clss;
}


// BP_MultiTalk_RandomBattle_Police_C BP_MultiTalk_RandomBattle_Police.Default__BP_MultiTalk_RandomBattle_Police_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_RandomBattle_Police_C* UBP_MultiTalk_RandomBattle_Police_C::GetDefaultObj()
{
	static class UBP_MultiTalk_RandomBattle_Police_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_RandomBattle_Police_C*>(UBP_MultiTalk_RandomBattle_Police_C::StaticClass()->DefaultObject);

	return Default;
}

}


