#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_SheepBall.ABP_SheepBall_C
// (None)

class UClass* UABP_SheepBall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_SheepBall_C");

	return Clss;
}


// ABP_SheepBall_C ABP_SheepBall.Default__ABP_SheepBall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_SheepBall_C* UABP_SheepBall_C::GetDefaultObj()
{
	static class UABP_SheepBall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_SheepBall_C*>(UABP_SheepBall_C::StaticClass()->DefaultObject);

	return Default;
}

}


