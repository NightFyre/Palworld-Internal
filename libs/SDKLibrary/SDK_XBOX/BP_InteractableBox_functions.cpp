#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractableBox.BP_InteractableBox_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_InteractableBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractableBox_C");

	return Clss;
}


// BP_InteractableBox_C BP_InteractableBox.Default__BP_InteractableBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractableBox_C* UBP_InteractableBox_C::GetDefaultObj()
{
	static class UBP_InteractableBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractableBox_C*>(UBP_InteractableBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


