#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalWazaDatabase.BP_PalWazaDatabase_C
// (None)

class UClass* UBP_PalWazaDatabase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalWazaDatabase_C");

	return Clss;
}


// BP_PalWazaDatabase_C BP_PalWazaDatabase.Default__BP_PalWazaDatabase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalWazaDatabase_C* UBP_PalWazaDatabase_C::GetDefaultObj()
{
	static class UBP_PalWazaDatabase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalWazaDatabase_C*>(UBP_PalWazaDatabase_C::StaticClass()->DefaultObject);

	return Default;
}

}


