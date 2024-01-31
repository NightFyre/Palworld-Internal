#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionStep_Left.BP_ActionStep_Left_C
// (None)

class UClass* UBP_ActionStep_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionStep_Left_C");

	return Clss;
}


// BP_ActionStep_Left_C BP_ActionStep_Left.Default__BP_ActionStep_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionStep_Left_C* UBP_ActionStep_Left_C::GetDefaultObj()
{
	static class UBP_ActionStep_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionStep_Left_C*>(UBP_ActionStep_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


