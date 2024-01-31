#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_Emote_2.BP_Action_Emote_2_C
// (None)

class UClass* UBP_Action_Emote_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_Emote_2_C");

	return Clss;
}


// BP_Action_Emote_2_C BP_Action_Emote_2.Default__BP_Action_Emote_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_Emote_2_C* UBP_Action_Emote_2_C::GetDefaultObj()
{
	static class UBP_Action_Emote_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_Emote_2_C*>(UBP_Action_Emote_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


