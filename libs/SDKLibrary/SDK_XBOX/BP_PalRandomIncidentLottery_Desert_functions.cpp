#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRandomIncidentLottery_Desert.BP_PalRandomIncidentLottery_Desert_C
// (None)

class UClass* UBP_PalRandomIncidentLottery_Desert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRandomIncidentLottery_Desert_C");

	return Clss;
}


// BP_PalRandomIncidentLottery_Desert_C BP_PalRandomIncidentLottery_Desert.Default__BP_PalRandomIncidentLottery_Desert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalRandomIncidentLottery_Desert_C* UBP_PalRandomIncidentLottery_Desert_C::GetDefaultObj()
{
	static class UBP_PalRandomIncidentLottery_Desert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalRandomIncidentLottery_Desert_C*>(UBP_PalRandomIncidentLottery_Desert_C::StaticClass()->DefaultObject);

	return Default;
}

}


