#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_SpawnItem_SheepBall.BP_Action_SpawnItem_SheepBall_C
// (None)

class UClass* UBP_Action_SpawnItem_SheepBall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_SpawnItem_SheepBall_C");

	return Clss;
}


// BP_Action_SpawnItem_SheepBall_C BP_Action_SpawnItem_SheepBall.Default__BP_Action_SpawnItem_SheepBall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_SpawnItem_SheepBall_C* UBP_Action_SpawnItem_SheepBall_C::GetDefaultObj()
{
	static class UBP_Action_SpawnItem_SheepBall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_SpawnItem_SheepBall_C*>(UBP_Action_SpawnItem_SheepBall_C::StaticClass()->DefaultObject);

	return Default;
}

}


