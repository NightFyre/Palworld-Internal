#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InGameMainMenuParameter.BP_InGameMainMenuParameter_C
// (None)

class UClass* UBP_InGameMainMenuParameter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InGameMainMenuParameter_C");

	return Clss;
}


// BP_InGameMainMenuParameter_C BP_InGameMainMenuParameter.Default__BP_InGameMainMenuParameter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InGameMainMenuParameter_C* UBP_InGameMainMenuParameter_C::GetDefaultObj()
{
	static class UBP_InGameMainMenuParameter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InGameMainMenuParameter_C*>(UBP_InGameMainMenuParameter_C::StaticClass()->DefaultObject);

	return Default;
}

}


