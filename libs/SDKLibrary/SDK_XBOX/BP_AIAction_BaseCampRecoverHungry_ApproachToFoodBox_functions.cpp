#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox.BP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox_C
// (None)

class UClass* UBP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox_C");

	return Clss;
}


// BP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox_C BP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox.Default__BP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox_C* UBP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox_C::GetDefaultObj()
{
	static class UBP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox_C*>(UBP_AIAction_BaseCampRecoverHungry_ApproachToFoodBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


