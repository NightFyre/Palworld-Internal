#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalWorldMapUIData.BP_PalWorldMapUIData_C
// (None)

class UClass* UBP_PalWorldMapUIData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalWorldMapUIData_C");

	return Clss;
}


// BP_PalWorldMapUIData_C BP_PalWorldMapUIData.Default__BP_PalWorldMapUIData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalWorldMapUIData_C* UBP_PalWorldMapUIData_C::GetDefaultObj()
{
	static class UBP_PalWorldMapUIData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalWorldMapUIData_C*>(UBP_PalWorldMapUIData_C::StaticClass()->DefaultObject);

	return Default;
}

}


