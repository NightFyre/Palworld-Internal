#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalCharacterContainerManager.BP_PalCharacterContainerManager_C
// (None)

class UClass* UBP_PalCharacterContainerManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalCharacterContainerManager_C");

	return Clss;
}


// BP_PalCharacterContainerManager_C BP_PalCharacterContainerManager.Default__BP_PalCharacterContainerManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalCharacterContainerManager_C* UBP_PalCharacterContainerManager_C::GetDefaultObj()
{
	static class UBP_PalCharacterContainerManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalCharacterContainerManager_C*>(UBP_PalCharacterContainerManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


