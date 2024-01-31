#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionComposite_BaseCamp.BP_AIActionComposite_BaseCamp_C
// (None)

class UClass* UBP_AIActionComposite_BaseCamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionComposite_BaseCamp_C");

	return Clss;
}


// BP_AIActionComposite_BaseCamp_C BP_AIActionComposite_BaseCamp.Default__BP_AIActionComposite_BaseCamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionComposite_BaseCamp_C* UBP_AIActionComposite_BaseCamp_C::GetDefaultObj()
{
	static class UBP_AIActionComposite_BaseCamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionComposite_BaseCamp_C*>(UBP_AIActionComposite_BaseCamp_C::StaticClass()->DefaultObject);

	return Default;
}

}


