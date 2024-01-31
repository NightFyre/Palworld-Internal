#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionStep_Forward.BP_ActionStep_Forward_C
// (None)

class UClass* UBP_ActionStep_Forward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionStep_Forward_C");

	return Clss;
}


// BP_ActionStep_Forward_C BP_ActionStep_Forward.Default__BP_ActionStep_Forward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionStep_Forward_C* UBP_ActionStep_Forward_C::GetDefaultObj()
{
	static class UBP_ActionStep_Forward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionStep_Forward_C*>(UBP_ActionStep_Forward_C::StaticClass()->DefaultObject);

	return Default;
}

}


