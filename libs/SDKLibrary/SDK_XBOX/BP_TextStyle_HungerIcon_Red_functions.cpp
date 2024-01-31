#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TextStyle_HungerIcon_Red.BP_TextStyle_HungerIcon_Red_C
// (None)

class UClass* UBP_TextStyle_HungerIcon_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TextStyle_HungerIcon_Red_C");

	return Clss;
}


// BP_TextStyle_HungerIcon_Red_C BP_TextStyle_HungerIcon_Red.Default__BP_TextStyle_HungerIcon_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TextStyle_HungerIcon_Red_C* UBP_TextStyle_HungerIcon_Red_C::GetDefaultObj()
{
	static class UBP_TextStyle_HungerIcon_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TextStyle_HungerIcon_Red_C*>(UBP_TextStyle_HungerIcon_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


