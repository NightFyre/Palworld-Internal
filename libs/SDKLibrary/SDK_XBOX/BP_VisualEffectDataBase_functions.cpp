#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VisualEffectDataBase.BP_VisualEffectDataBase_C
// (None)

class UClass* UBP_VisualEffectDataBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VisualEffectDataBase_C");

	return Clss;
}


// BP_VisualEffectDataBase_C BP_VisualEffectDataBase.Default__BP_VisualEffectDataBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VisualEffectDataBase_C* UBP_VisualEffectDataBase_C::GetDefaultObj()
{
	static class UBP_VisualEffectDataBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VisualEffectDataBase_C*>(UBP_VisualEffectDataBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


