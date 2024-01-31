#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_DesertVillage002.BP_MultiTalk_DesertVillage002_C
// (None)

class UClass* UBP_MultiTalk_DesertVillage002_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_DesertVillage002_C");

	return Clss;
}


// BP_MultiTalk_DesertVillage002_C BP_MultiTalk_DesertVillage002.Default__BP_MultiTalk_DesertVillage002_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_DesertVillage002_C* UBP_MultiTalk_DesertVillage002_C::GetDefaultObj()
{
	static class UBP_MultiTalk_DesertVillage002_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_DesertVillage002_C*>(UBP_MultiTalk_DesertVillage002_C::StaticClass()->DefaultObject);

	return Default;
}

}


