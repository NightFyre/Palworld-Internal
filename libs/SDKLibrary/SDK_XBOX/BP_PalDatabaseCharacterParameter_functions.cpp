#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalDatabaseCharacterParameter.BP_PalDatabaseCharacterParameter_C
// (None)

class UClass* UBP_PalDatabaseCharacterParameter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalDatabaseCharacterParameter_C");

	return Clss;
}


// BP_PalDatabaseCharacterParameter_C BP_PalDatabaseCharacterParameter.Default__BP_PalDatabaseCharacterParameter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalDatabaseCharacterParameter_C* UBP_PalDatabaseCharacterParameter_C::GetDefaultObj()
{
	static class UBP_PalDatabaseCharacterParameter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalDatabaseCharacterParameter_C*>(UBP_PalDatabaseCharacterParameter_C::StaticClass()->DefaultObject);

	return Default;
}

}


