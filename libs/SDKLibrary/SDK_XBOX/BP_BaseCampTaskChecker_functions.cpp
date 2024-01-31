#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BaseCampTaskChecker.BP_BaseCampTaskChecker_C
// (None)

class UClass* UBP_BaseCampTaskChecker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BaseCampTaskChecker_C");

	return Clss;
}


// BP_BaseCampTaskChecker_C BP_BaseCampTaskChecker.Default__BP_BaseCampTaskChecker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BaseCampTaskChecker_C* UBP_BaseCampTaskChecker_C::GetDefaultObj()
{
	static class UBP_BaseCampTaskChecker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BaseCampTaskChecker_C*>(UBP_BaseCampTaskChecker_C::StaticClass()->DefaultObject);

	return Default;
}

}


