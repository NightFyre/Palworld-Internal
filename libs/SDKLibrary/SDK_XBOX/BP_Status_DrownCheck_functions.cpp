#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Status_DrownCheck.BP_Status_DrownCheck_C
// (None)

class UClass* UBP_Status_DrownCheck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Status_DrownCheck_C");

	return Clss;
}


// BP_Status_DrownCheck_C BP_Status_DrownCheck.Default__BP_Status_DrownCheck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Status_DrownCheck_C* UBP_Status_DrownCheck_C::GetDefaultObj()
{
	static class UBP_Status_DrownCheck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Status_DrownCheck_C*>(UBP_Status_DrownCheck_C::StaticClass()->DefaultObject);

	return Default;
}

}


