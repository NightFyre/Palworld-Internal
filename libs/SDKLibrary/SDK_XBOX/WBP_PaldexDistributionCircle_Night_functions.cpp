#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PaldexDistributionCircle_Night.WBP_PaldexDistributionCircle_Night_C
// (None)

class UClass* UWBP_PaldexDistributionCircle_Night_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PaldexDistributionCircle_Night_C");

	return Clss;
}


// WBP_PaldexDistributionCircle_Night_C WBP_PaldexDistributionCircle_Night.Default__WBP_PaldexDistributionCircle_Night_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PaldexDistributionCircle_Night_C* UWBP_PaldexDistributionCircle_Night_C::GetDefaultObj()
{
	static class UWBP_PaldexDistributionCircle_Night_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PaldexDistributionCircle_Night_C*>(UWBP_PaldexDistributionCircle_Night_C::StaticClass()->DefaultObject);

	return Default;
}

}


