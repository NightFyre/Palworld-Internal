#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerGenderChanger.BP_PlayerGenderChanger_C
// (None)

class UClass* UBP_PlayerGenderChanger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerGenderChanger_C");

	return Clss;
}


// BP_PlayerGenderChanger_C BP_PlayerGenderChanger.Default__BP_PlayerGenderChanger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerGenderChanger_C* UBP_PlayerGenderChanger_C::GetDefaultObj()
{
	static class UBP_PlayerGenderChanger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerGenderChanger_C*>(UBP_PlayerGenderChanger_C::StaticClass()->DefaultObject);

	return Default;
}

}


