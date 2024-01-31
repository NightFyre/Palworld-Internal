#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalInvisibleButtonStyle.BP_PalInvisibleButtonStyle_C
// (None)

class UClass* UBP_PalInvisibleButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalInvisibleButtonStyle_C");

	return Clss;
}


// BP_PalInvisibleButtonStyle_C BP_PalInvisibleButtonStyle.Default__BP_PalInvisibleButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalInvisibleButtonStyle_C* UBP_PalInvisibleButtonStyle_C::GetDefaultObj()
{
	static class UBP_PalInvisibleButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalInvisibleButtonStyle_C*>(UBP_PalInvisibleButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


