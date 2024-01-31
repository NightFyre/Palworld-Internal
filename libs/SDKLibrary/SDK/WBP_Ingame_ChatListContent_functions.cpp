#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Ingame_ChatListContent.WBP_Ingame_ChatListContent_C
// (None)

class UClass* UWBP_Ingame_ChatListContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Ingame_ChatListContent_C");

	return Clss;
}


// WBP_Ingame_ChatListContent_C WBP_Ingame_ChatListContent.Default__WBP_Ingame_ChatListContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Ingame_ChatListContent_C* UWBP_Ingame_ChatListContent_C::GetDefaultObj()
{
	static class UWBP_Ingame_ChatListContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Ingame_ChatListContent_C*>(UWBP_Ingame_ChatListContent_C::StaticClass()->DefaultObject);

	return Default;
}

}


