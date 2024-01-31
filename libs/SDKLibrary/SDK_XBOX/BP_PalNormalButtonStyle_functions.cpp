#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalNormalButtonStyle.BP_PalNormalButtonStyle_C
// (None)

class UClass* UBP_PalNormalButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalNormalButtonStyle_C");

	return Clss;
}


// BP_PalNormalButtonStyle_C BP_PalNormalButtonStyle.Default__BP_PalNormalButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalNormalButtonStyle_C* UBP_PalNormalButtonStyle_C::GetDefaultObj()
{
	static class UBP_PalNormalButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalNormalButtonStyle_C*>(UBP_PalNormalButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


