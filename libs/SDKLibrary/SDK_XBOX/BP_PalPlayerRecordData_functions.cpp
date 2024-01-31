#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPlayerRecordData.BP_PalPlayerRecordData_C
// (None)

class UClass* UBP_PalPlayerRecordData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPlayerRecordData_C");

	return Clss;
}


// BP_PalPlayerRecordData_C BP_PalPlayerRecordData.Default__BP_PalPlayerRecordData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalPlayerRecordData_C* UBP_PalPlayerRecordData_C::GetDefaultObj()
{
	static class UBP_PalPlayerRecordData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalPlayerRecordData_C*>(UBP_PalPlayerRecordData_C::StaticClass()->DefaultObject);

	return Default;
}

}


