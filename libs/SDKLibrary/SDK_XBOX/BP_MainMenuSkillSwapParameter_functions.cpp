#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainMenuSkillSwapParameter.BP_MainMenuSkillSwapParameter_C
// (None)

class UClass* UBP_MainMenuSkillSwapParameter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainMenuSkillSwapParameter_C");

	return Clss;
}


// BP_MainMenuSkillSwapParameter_C BP_MainMenuSkillSwapParameter.Default__BP_MainMenuSkillSwapParameter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MainMenuSkillSwapParameter_C* UBP_MainMenuSkillSwapParameter_C::GetDefaultObj()
{
	static class UBP_MainMenuSkillSwapParameter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MainMenuSkillSwapParameter_C*>(UBP_MainMenuSkillSwapParameter_C::StaticClass()->DefaultObject);

	return Default;
}

}


