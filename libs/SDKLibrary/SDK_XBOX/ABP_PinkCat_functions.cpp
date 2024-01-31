#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_PinkCat.ABP_PinkCat_C
// (None)

class UClass* UABP_PinkCat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_PinkCat_C");

	return Clss;
}


// ABP_PinkCat_C ABP_PinkCat.Default__ABP_PinkCat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_PinkCat_C* UABP_PinkCat_C::GetDefaultObj()
{
	static class UABP_PinkCat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_PinkCat_C*>(UABP_PinkCat_C::StaticClass()->DefaultObject);

	return Default;
}

}


