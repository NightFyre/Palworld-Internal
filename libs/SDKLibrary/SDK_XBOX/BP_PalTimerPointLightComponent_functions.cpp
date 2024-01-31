#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalTimerPointLightComponent.BP_PalTimerPointLightComponent_C
// (SceneComponent)

class UClass* UBP_PalTimerPointLightComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalTimerPointLightComponent_C");

	return Clss;
}


// BP_PalTimerPointLightComponent_C BP_PalTimerPointLightComponent.Default__BP_PalTimerPointLightComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalTimerPointLightComponent_C* UBP_PalTimerPointLightComponent_C::GetDefaultObj()
{
	static class UBP_PalTimerPointLightComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalTimerPointLightComponent_C*>(UBP_PalTimerPointLightComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


