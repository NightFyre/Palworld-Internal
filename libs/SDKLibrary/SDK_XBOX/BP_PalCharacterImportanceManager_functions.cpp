#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalCharacterImportanceManager.BP_PalCharacterImportanceManager_C
// (None)

class UClass* UBP_PalCharacterImportanceManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalCharacterImportanceManager_C");

	return Clss;
}


// BP_PalCharacterImportanceManager_C BP_PalCharacterImportanceManager.Default__BP_PalCharacterImportanceManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalCharacterImportanceManager_C* UBP_PalCharacterImportanceManager_C::GetDefaultObj()
{
	static class UBP_PalCharacterImportanceManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalCharacterImportanceManager_C*>(UBP_PalCharacterImportanceManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


