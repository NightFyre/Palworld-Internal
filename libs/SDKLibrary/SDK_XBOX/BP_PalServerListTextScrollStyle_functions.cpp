#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalServerListTextScrollStyle.BP_PalServerListTextScrollStyle_C
// (None)

class UClass* UBP_PalServerListTextScrollStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalServerListTextScrollStyle_C");

	return Clss;
}


// BP_PalServerListTextScrollStyle_C BP_PalServerListTextScrollStyle.Default__BP_PalServerListTextScrollStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalServerListTextScrollStyle_C* UBP_PalServerListTextScrollStyle_C::GetDefaultObj()
{
	static class UBP_PalServerListTextScrollStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalServerListTextScrollStyle_C*>(UBP_PalServerListTextScrollStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


