#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalCharacterManager.BP_PalCharacterManager_C
// (None)

class UClass* UBP_PalCharacterManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalCharacterManager_C");

	return Clss;
}


// BP_PalCharacterManager_C BP_PalCharacterManager.Default__BP_PalCharacterManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalCharacterManager_C* UBP_PalCharacterManager_C::GetDefaultObj()
{
	static class UBP_PalCharacterManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalCharacterManager_C*>(UBP_PalCharacterManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


