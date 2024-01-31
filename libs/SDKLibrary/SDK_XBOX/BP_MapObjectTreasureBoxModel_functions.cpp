#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObjectTreasureBoxModel.BP_MapObjectTreasureBoxModel_C
// (None)

class UClass* UBP_MapObjectTreasureBoxModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObjectTreasureBoxModel_C");

	return Clss;
}


// BP_MapObjectTreasureBoxModel_C BP_MapObjectTreasureBoxModel.Default__BP_MapObjectTreasureBoxModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MapObjectTreasureBoxModel_C* UBP_MapObjectTreasureBoxModel_C::GetDefaultObj()
{
	static class UBP_MapObjectTreasureBoxModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MapObjectTreasureBoxModel_C*>(UBP_MapObjectTreasureBoxModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


