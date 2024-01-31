#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalExpDatabase.BP_PalExpDatabase_C
// (None)

class UClass* UBP_PalExpDatabase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalExpDatabase_C");

	return Clss;
}


// BP_PalExpDatabase_C BP_PalExpDatabase.Default__BP_PalExpDatabase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalExpDatabase_C* UBP_PalExpDatabase_C::GetDefaultObj()
{
	static class UBP_PalExpDatabase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalExpDatabase_C*>(UBP_PalExpDatabase_C::StaticClass()->DefaultObject);

	return Default;
}

}


