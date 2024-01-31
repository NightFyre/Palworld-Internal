#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPCActionStep_Right.BP_NPCActionStep_Right_C
// (None)

class UClass* UBP_NPCActionStep_Right_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPCActionStep_Right_C");

	return Clss;
}


// BP_NPCActionStep_Right_C BP_NPCActionStep_Right.Default__BP_NPCActionStep_Right_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NPCActionStep_Right_C* UBP_NPCActionStep_Right_C::GetDefaultObj()
{
	static class UBP_NPCActionStep_Right_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NPCActionStep_Right_C*>(UBP_NPCActionStep_Right_C::StaticClass()->DefaultObject);

	return Default;
}

}


