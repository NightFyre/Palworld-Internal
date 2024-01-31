#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionStep_Right.BP_ActionStep_Right_C
// (None)

class UClass* UBP_ActionStep_Right_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionStep_Right_C");

	return Clss;
}


// BP_ActionStep_Right_C BP_ActionStep_Right.Default__BP_ActionStep_Right_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionStep_Right_C* UBP_ActionStep_Right_C::GetDefaultObj()
{
	static class UBP_ActionStep_Right_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionStep_Right_C*>(UBP_ActionStep_Right_C::StaticClass()->DefaultObject);

	return Default;
}

}


