#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_Emote_4.BP_Action_Emote_4_C
// (None)

class UClass* UBP_Action_Emote_4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_Emote_4_C");

	return Clss;
}


// BP_Action_Emote_4_C BP_Action_Emote_4.Default__BP_Action_Emote_4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_Emote_4_C* UBP_Action_Emote_4_C::GetDefaultObj()
{
	static class UBP_Action_Emote_4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_Emote_4_C*>(UBP_Action_Emote_4_C::StaticClass()->DefaultObject);

	return Default;
}

}


