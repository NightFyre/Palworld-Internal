#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionGrowupPromotion.BP_ActionGrowupPromotion_C
// (None)

class UClass* UBP_ActionGrowupPromotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionGrowupPromotion_C");

	return Clss;
}


// BP_ActionGrowupPromotion_C BP_ActionGrowupPromotion.Default__BP_ActionGrowupPromotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionGrowupPromotion_C* UBP_ActionGrowupPromotion_C::GetDefaultObj()
{
	static class UBP_ActionGrowupPromotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionGrowupPromotion_C*>(UBP_ActionGrowupPromotion_C::StaticClass()->DefaultObject);

	return Default;
}

}


