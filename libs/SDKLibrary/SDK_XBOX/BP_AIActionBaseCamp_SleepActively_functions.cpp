#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionBaseCamp_SleepActively.BP_AIActionBaseCamp_SleepActively_C
// (None)

class UClass* UBP_AIActionBaseCamp_SleepActively_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionBaseCamp_SleepActively_C");

	return Clss;
}


// BP_AIActionBaseCamp_SleepActively_C BP_AIActionBaseCamp_SleepActively.Default__BP_AIActionBaseCamp_SleepActively_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionBaseCamp_SleepActively_C* UBP_AIActionBaseCamp_SleepActively_C::GetDefaultObj()
{
	static class UBP_AIActionBaseCamp_SleepActively_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionBaseCamp_SleepActively_C*>(UBP_AIActionBaseCamp_SleepActively_C::StaticClass()->DefaultObject);

	return Default;
}

}


