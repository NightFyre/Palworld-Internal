#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SheepBall.BP_SheepBall_C
// (Actor, Pawn)

class UClass* ABP_SheepBall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SheepBall_C");

	return Clss;
}


// BP_SheepBall_C BP_SheepBall.Default__BP_SheepBall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SheepBall_C* ABP_SheepBall_C::GetDefaultObj()
{
	static class ABP_SheepBall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SheepBall_C*>(ABP_SheepBall_C::StaticClass()->DefaultObject);

	return Default;
}

}


