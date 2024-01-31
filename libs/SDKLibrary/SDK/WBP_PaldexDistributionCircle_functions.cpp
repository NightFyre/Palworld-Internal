#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PaldexDistributionCircle.WBP_PaldexDistributionCircle_C
// (None)

class UClass* UWBP_PaldexDistributionCircle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PaldexDistributionCircle_C");

	return Clss;
}


// WBP_PaldexDistributionCircle_C WBP_PaldexDistributionCircle.Default__WBP_PaldexDistributionCircle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PaldexDistributionCircle_C* UWBP_PaldexDistributionCircle_C::GetDefaultObj()
{
	static class UWBP_PaldexDistributionCircle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PaldexDistributionCircle_C*>(UWBP_PaldexDistributionCircle_C::StaticClass()->DefaultObject);

	return Default;
}

}


