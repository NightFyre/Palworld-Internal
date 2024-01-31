#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractableCapsule.BP_InteractableCapsule_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_InteractableCapsule_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractableCapsule_C");

	return Clss;
}


// BP_InteractableCapsule_C BP_InteractableCapsule.Default__BP_InteractableCapsule_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractableCapsule_C* UBP_InteractableCapsule_C::GetDefaultObj()
{
	static class UBP_InteractableCapsule_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractableCapsule_C*>(UBP_InteractableCapsule_C::StaticClass()->DefaultObject);

	return Default;
}

}


