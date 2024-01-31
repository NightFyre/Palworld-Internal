#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionGeneralAttackNearBase.BP_ActionGeneralAttackNearBase_C
// (None)

class UClass* UBP_ActionGeneralAttackNearBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionGeneralAttackNearBase_C");

	return Clss;
}


// BP_ActionGeneralAttackNearBase_C BP_ActionGeneralAttackNearBase.Default__BP_ActionGeneralAttackNearBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionGeneralAttackNearBase_C* UBP_ActionGeneralAttackNearBase_C::GetDefaultObj()
{
	static class UBP_ActionGeneralAttackNearBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionGeneralAttackNearBase_C*>(UBP_ActionGeneralAttackNearBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


