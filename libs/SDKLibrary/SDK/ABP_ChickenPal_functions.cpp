#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_ChickenPal.ABP_ChickenPal_C
// (None)

class UClass* UABP_ChickenPal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_ChickenPal_C");

	return Clss;
}


// ABP_ChickenPal_C ABP_ChickenPal.Default__ABP_ChickenPal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_ChickenPal_C* UABP_ChickenPal_C::GetDefaultObj()
{
	static class UABP_ChickenPal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_ChickenPal_C*>(UABP_ChickenPal_C::StaticClass()->DefaultObject);

	return Default;
}

}


