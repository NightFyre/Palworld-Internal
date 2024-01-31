#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InGameMainMenuUseItemParameter.BP_InGameMainMenuUseItemParameter_C
// (None)

class UClass* UBP_InGameMainMenuUseItemParameter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InGameMainMenuUseItemParameter_C");

	return Clss;
}


// BP_InGameMainMenuUseItemParameter_C BP_InGameMainMenuUseItemParameter.Default__BP_InGameMainMenuUseItemParameter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InGameMainMenuUseItemParameter_C* UBP_InGameMainMenuUseItemParameter_C::GetDefaultObj()
{
	static class UBP_InGameMainMenuUseItemParameter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InGameMainMenuUseItemParameter_C*>(UBP_InGameMainMenuUseItemParameter_C::StaticClass()->DefaultObject);

	return Default;
}

}


