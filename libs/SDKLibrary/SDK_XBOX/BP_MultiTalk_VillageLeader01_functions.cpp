#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_VillageLeader01.BP_MultiTalk_VillageLeader01_C
// (None)

class UClass* UBP_MultiTalk_VillageLeader01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_VillageLeader01_C");

	return Clss;
}


// BP_MultiTalk_VillageLeader01_C BP_MultiTalk_VillageLeader01.Default__BP_MultiTalk_VillageLeader01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_VillageLeader01_C* UBP_MultiTalk_VillageLeader01_C::GetDefaultObj()
{
	static class UBP_MultiTalk_VillageLeader01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_VillageLeader01_C*>(UBP_MultiTalk_VillageLeader01_C::StaticClass()->DefaultObject);

	return Default;
}

}


